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
void preorder(treenode *root)
{
    stack *top=NULL;
    treenode *curr=root;
    push(&top,curr);
    while(!isEmpty(top))
    {
        curr=pop(&top);
        printf("%d ",curr->data);
        if(curr->right)
        push(&top,curr->right);
        if(curr->left)
        push(&top,curr->left);
    }
}
int main()
{
    treenode *root    = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    preorder(root);
}
