#include<stdio.h>                        /*Robert:book for algorithm*/
typedef struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;
}treenode;
typedef struct stree
{
    treenode *node;
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
typedef struct map
{
    int key;
    int val;
}map;
typedef struct LL
{
    map *m;
    struct LL *next;
}LL;
void pushBeg(LL **head,map *m1)
{
    LL *temp=(LL*)malloc(sizeof(LL));
    temp->m=m1;
    temp->next=(*head);
    *head=temp;
}

void pushEnd(LL** h,map* val){
	LL* curr=(*h);
	while(curr->next!=NULL)
		curr=curr->next;
	LL* n=(LL*)malloc(sizeof(LL));
	n->m=val;
	n->next=NULL;
	curr->next=n;
}
void pushQ(queue *q,stree *nn)  /*adding in queue*/
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
int isEmpty(queue *q)
{
    return q->front==NULL;
}
int count(LL *head,int val)
{
    LL *curr=head;
    while(curr)
    {
        if(curr->m->key==val)
            return 1;
        else curr=curr->next;
    }
    return 0;
}
treenode *BST(treenode *root,int d)
{
    if(root==NULL)
    {
        treenode *nn=(treenode *)malloc(sizeof(treenode));
        nn->data=d;
        nn->left=NULL;
        nn->right=NULL;
        return nn;
    }
    else if(root->data>d)
        root->left=BST(root->left,d);
    else root->right=BST(root->right,d);
    return root;
}

int main()
{
    queue *q=(queue*)malloc(sizeof(queue));
    q->front=NULL;
    q->rear=NULL;
    int n;
    treenode *root=NULL;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    int i=0,num=0;
    for(i=0;i<n;i++)
        {
            scanf("%d",&num);
            root=BST(root,num);
        }
        stree *nn=(stree*)malloc(sizeof(stree));
        nn->node=root;
        nn->dist=0;
    LL *head=NULL;
 pushQ(q,nn);
  while(!isEmpty(q))
  {
     map *m=(map*)malloc(sizeof(map));
      if(count(head,q->front->snode->dist)==0)
      {
          m->key=q->front->snode->dist;
          m->val=q->front->snode->node->data;
          if(m->key<=0)
			pushBeg(&head,m);
		  else
			pushEnd(&head,m);
      }
       int dis=q->front->snode->dist;
       nn=(stree*)malloc(sizeof(stree));
      if(q->front->snode->node->left)
      {
          nn->dist=dis-1;
          nn->node=q->front->snode->node->left;
          pushQ(q,nn);
      }
      nn=(stree*)malloc(sizeof(stree));
      if(q->front->snode->node->right)
      {
          nn->dist=dis+1;
          nn->node=q->front->snode->node->right;
          pushQ(q,nn);
      }
    /*  printf("%d %d\n",q->front->snode->node->data,q->front->snode->dist);*/
      pop(q);
  }
  while(head)
  {
      printf("%d ",head->m->val);
      head=head->next;
  }
}

