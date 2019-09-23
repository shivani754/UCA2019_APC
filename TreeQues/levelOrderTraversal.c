#include<stdio.h>
typedef struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;
}treenode;
typedef struct queue
{
    treenode *t;
    struct queue *next;
}queue;
treenode *newNode(int val)
{
    treenode *root=(treenode*)malloc(sizeof(treenode));
    root->data=val;
    root->left=NULL;
    root->right=NULL;
    return root;
}
void push(queue **top,treenode *root)
{
   queue*temp=(queue*)malloc(sizeof(queue));
   queue *curr=*top;
   temp->t=root;
   temp->next=NULL;
   if(*top==NULL)
    {
        *top=temp;
        return;
    }
   while(curr&&curr->next)
        curr=curr->next;
   curr->next=temp;
}
treenode* pop(queue **top)
{
    if(*top==NULL)return 0;
    queue *temp=*top;
    treenode *node=NULL;
    node=temp->t;
    *top=temp->next;
    free(temp);
    return node;
}
int peek(queue *top)
{
    if(top==NULL||top->t==NULL)
        return 0;
    return top->t->data;
}
int isEmpty(queue *top)
{
    return top==NULL;
}
void LOT(treenode *root)
{
    queue *top=NULL;
    push(&top,root);
    push(&top,NULL);
    treenode *temp=root;
    while(!isEmpty(top))
    {
        int n=peek(top);
        if(n==0)
        {
            pop(&top);
            printf("\n");
            if(!isEmpty(top))
            push(&top,NULL);
        }
        else
        {
            printf("%d ",n);
            temp=pop(&top);
            if(temp->left)
            push(&top,temp->left);
            if(temp->right)
            push(&top,temp->right);
        }
    }
}
treenode *insert(treenode *root,int val)
{
    if(root==NULL)
    {
        treenode*n=(treenode*)malloc(sizeof(treenode));
        n->data=val;
        n->left=NULL;
        n->right=NULL;
        return n;
    }
    else if(root->data>val)
        root->left=insert(root->left,val);
    else
        root->right=insert(root->right,val);
    return root;
}
int main()
{
   int n;
    treenode *root=NULL;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    int i=0,num=0;
    for(i=0;i<n;i++)
        {
            scanf("%d",&num);
            root=insert(root,num);
        }
    LOT(root);
}
