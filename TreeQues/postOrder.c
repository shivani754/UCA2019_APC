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
treenode *peek(stack *top)
{
    if(top==NULL)
        return 0;
    else return top->t;
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
void postorder(treenode *root)
{
    treenode *curr=root,*temp=NULL;
    stack *top=NULL;
    while(curr||!isEmpty(top))
    {
        while(curr)
      {
        push(&top,curr);
        curr=curr->left;
       }
      temp=peek(top);
       if(temp->right)
         curr=temp->right;
       else
         {
         printf("%d ",temp->data);
          pop(&top);
            while(!isEmpty(top)&&peek(top)->right==temp)
           {
            temp=pop(&top);
            printf("%d ",temp->data);
           }
            if(!isEmpty(top))
                curr=peek(top)->right;
         }
    }
}
int main()
{
    treenode *root    = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    postorder(root);
}
