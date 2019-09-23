#include<stdio.h>
typedef struct treenode
{
    struct treenode *left;
    struct treenode *right;
    int data;
}treenode;
treenode *newNode(int val)
{
    treenode *root=(treenode*)malloc(sizeof(treenode));
    root->data=val;
    root->left=NULL;
    root->right=NULL;
    return root;
}
int find(treenode *root,int elem)
{
    if(root==NULL)return 0;
    else if(root->data==elem)return 1;
    return find(root->left,elem)||find(root->right,elem);
}
int main()
{
    treenode *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    int elem;
    printf("enter the element you want to find:");
    scanf("%d",&elem);
    printf("%d",find(root,elem));
}
