#include<stdio.h>
typedef struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;
}treenode;
typedef struct stree
{
    treenode *t;
    int dist;
}stree;
typedef struct Node
{
    stree *snode;
    struct Node *next;
}Node;
typedef struct queue
{
    Node *front;
    Node *rear;
}queue;
typedef struct LL
{
    stree *sn;
    struct LL *next;
}LL;
typedef struct L1
{
    int data;
    struct L1 *next;
}LL1;
void push(queue *q,stree *nn)  /*adding in queue*/
{
    Node *n=(Node *)malloc(sizeof(Node));
    n->next=NULL;
    n->snode=nn;
    if(q->rear==NULL)
    {
        q->front=n;
        q->rear=n;
    }
    else
    {
        q->rear->next=n;
        q->rear=n;
    }
}
void *pop(queue *q)
{
    if(q->front==NULL)return;
    if(q->front==q->rear)
    {
        q->front=NULL;
        q->rear=NULL;
        return;
    }
    q->front=q->front->next;
}
void pushLL(LL1 **h,int val){
    LL1* n=(LL1*)malloc(sizeof(LL1));
	n->data=val;
	n->next=NULL;
	if((*h)==NULL)
    {
        *h=n;
        return;
    }
	LL1 *curr=*h;
	while(curr->next!=NULL)
		curr=curr->next;
	curr->next=n;
}
void pushL(LL *h,stree* val){
	LL* curr=h;
	while(curr->next!=NULL)
		curr=curr->next;
	LL* n=(LL*)malloc(sizeof(LL));
	n->sn=val;
	n->next=NULL;
	curr->next=n;
}
void LOT(treenode *root,queue *q,int *min,int *max,LL **head)
{
    LL*temp=(LL*)malloc(sizeof(LL));
    stree *nn=(stree*)malloc(sizeof(stree));
    nn->dist=0;
    nn->t=root;
    push(q,nn);
    treenode *curr=root;
    temp->sn=nn;
    temp->next=NULL;
    *head=temp;
    while(q->front!=NULL)
    {
        nn=(stree*)malloc(sizeof(stree));
        int dis=q->front->snode->dist;
        if(q->front->snode->t->left)
        {
            *min=dis-1;
            nn->dist=dis-1;
            nn->t=q->front->snode->t->left;
           /* printf("**%d**\n",nn->dist);*/
            push(q,nn);
             pushL(*head,nn);
        }
       /* printf("--\n");*/
         nn=(stree*)malloc(sizeof(stree));
        if(q->front->snode->t->right)
        {
            if(*max<dis+1)
                *max=dis+1;
            nn->dist=dis+1;
            nn->t=q->front->snode->t->right;
           /* printf("++%d++\n",nn->dist);*/
            push(q,nn);
              pushL(*head,nn);
        }
        pop(q);
    }
}
treenode *insert(treenode *root,int val)
{
    if(root==NULL)
    {
        treenode *n=(treenode*)malloc(sizeof(treenode));
        n->data=val;
        n->left=NULL;
        n->right=NULL;
        return n;
    }
    else if(root->data>val)
        root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}
int main()
{
    treenode *root=NULL;
    int n;
     printf("enter the no. of elements:");
    scanf("%d",&n);
    int i=0,num=0;
    for(i=0;i<n;i++)
        {
            scanf("%d",&num);
            root=insert(root,num);
        }
    queue *q=(queue*)malloc(sizeof(queue));
    q->front=NULL;
    q->rear=NULL;
    int min=0,max=0;
    LL *head1=NULL;
    LOT(root,q,&min,&max,&head1);
    LL1 *arr[max-min+1];
    for(i = 0; i < max-min+1; i++) {
        arr[i] = malloc(sizeof(LL1));
        arr[i] = NULL;
    }
     while(head1)
     {
         pushLL(&arr[head1->sn->dist-min],head1->sn->t->data);
         head1=head1->next;
     }
   for(i=0;i<max-min+1;i++)
   {
       while(arr[i])
       {
           printf("%d ",arr[i]->data);
           arr[i]=arr[i]->next;
       }
       printf("\n");
   }
}
