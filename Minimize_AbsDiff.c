#include<stdio.h>
int max(int,int,int);
int min(int,int,int);
main()
{
    int n1,n2,n3;
    printf("enter the size of first array:");
    scanf("%d",&n1);
    int A[n1];
    int i=0,j=0,k=0;
    for(i=0;i<n1;i++)
        scanf("%d",&A[i]);

    printf("enter the size of second array:");
    scanf("%d",&n2);
    int B[n2];
     for(i=0;i<n2;i++)
        scanf("%d",&B[i]);
         printf("enter the size of third array:");
    scanf("%d",&n3);
    int C[n3];
     for(i=0;i<n3;i++)
        scanf("%d",&C[i]);
      i=0;j=0;k=0;
    int mini=max(A[0],B[0],C[0])-min(A[0],B[0],C[0]);
    if(A[i]<=B[j]&&A[i]<=C[k])i++;
    else if (B[j]<=A[i]&&B[j]<=C[k])j++;
    else k++;
    while(i<n1&&j<n2&&k<n3)
    {
         if(mini>(max(A[i],B[j],C[k])-min(A[i],B[j],C[k])))
            mini=max(A[i],B[j],C[k])-min(A[i],B[j],C[k]);
         if(A[i]<=B[j]&&A[i]<=C[k])i++;
    else if (B[j]<=A[i]&&B[j]<=C[k])j++;
    else k++;
    }
    printf("Minimum absolute difference is:%d",mini);
}
int max(int a,int b,int c)
    {
        int big=(a>b?(a>c?a:c):(b>c?b:c));
        return big;
    }
int min(int a,int b,int c)
    {
        int small=(a<b?(a<c?a:c):(b<c?b:c));
        return small;
    }
