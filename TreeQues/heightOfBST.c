#include<stdio.h>
typedef struct treenode
{
    struct treenode *left;
    struct treenode *right;
    int data;
}treenode;
treenode *newNode(int val)
{
    treenode *temp=(treenode*)malloc(sizeof(treenode));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int height(treenode *root)
{
    if(root==NULL)return 0;
    return 1+max(height(root->left),height(root->right));
}
int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}

/*int height(treenode *root)
{
    if(root==NULL)return 0;
    if (!root->left)
    return minDepth(root->right) + 1;
    if (!root->right)
    return minDepth(root->left) + 1;
    return 1+min(height(root->left),height(root->right));
}
int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}*/
int main()
{
    treenode *root=newNode(1);
    root->left=newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    printf("height : %d",height(root));
}

