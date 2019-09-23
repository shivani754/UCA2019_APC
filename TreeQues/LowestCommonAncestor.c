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
treenode *LCA(treenode *root,int n1,int n2)
{
    if(root==NULL)return NULL;
    if(root->data==n1||root->data==n2)
        return root;
    treenode *x=LCA(root->left,n1,n2);
    treenode *y=LCA(root->right,n1,n2);
    if(x&&y)return root;
    else if(x)return x;
    else if(y)return y;
    else return NULL;
}
/*treenode * path(treenode *root,treenode *arr,int t,int *count)
{
    if(root==NULL)return 0;
    arr[*count].left=root;
    arr[*count].data=root->data;
    *count++;
    if(root->data==t)return 1;
    int x=path(root->left,arr,t,count)||path(root->right,arr,t,count);
    if(x==0)*count--;
    else return x;
}*/
int main()
{
    treenode *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    printf("enter the elements:");
    int x,y;
    scanf("%d%d",&x,&y);
  /*  int count1=0,count2=0;
    treenode a[100],b[100];
    path(root,a,x,&count1);
    path(root,b,y,&count2);
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d %d\n",a[i].data,b[i].data);
        if(a[i].data==b[i].data)
        {
            printf("LCA = %d",a[i].left);
            break;
        }
    }
    printf("Any element doesn't exist");*/
   treenode *temp=LCA(root,x,y);
    printf("LCA = %d",temp->data);
}
