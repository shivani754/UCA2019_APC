#include<stdio.h>
typedef struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;
}treenode;
typedef struct stack
{
    treenode *t;
    struct stack *next;
}stack;
void push(stack **top,treenode *root)
{
    stack *temp=(stack*)malloc(sizeof(stack));
    temp->t=root;
    temp->next=*top;
    *top=temp;
}
treenode * pop(stack **top)
{
    stack *temp=*top;
    treenode *node=NULL;
    node=temp->t;
    *top=temp->next;
    free(temp);
    return node;
}
int isEmpty(stack *top)
{
    return top==NULL;
}
treenode *newNode(int val)
{
    treenode *root=(treenode*)malloc(sizeof(treenode));
    root->data=val;
    root->left=NULL;
    root->right=NULL;
    return (root);
}
void inorder(treenode *root)
{
    treenode *curr=root;
    stack *top=NULL;
    while(curr||!isEmpty(top))
    {
        while(curr)
        {
            push(&top,curr);
            curr=curr->left;
        }
        treenode *temp=pop(&top);
        printf("%d ",temp->data);
        curr=temp->right;
    }
}
int main()
{
  /*  int n;
    printf("enter no.of elements:");
    scanf("%d",&n);
    treenode *root=NULL;
    int i=0,num=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        root=newNode(num);
    }*/
    treenode *root    = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    inorder(root);
}
