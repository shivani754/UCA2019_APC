#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the size of first array:");
    scanf("%d",&m);
    int A[m];
    int i=0,j=0,k=0;
    for(i=0;i<m;i++)
        scanf("%d",&A[i]);
    printf("enter the size of second array:");
    scanf("%d",&n);
    int B[n];
     for(i=0;i<n;i++)
        scanf("%d",&B[i]);
    int *res=(int *)malloc(sizeof(int)*n);
        while(i<m&&j<n)
        {
            if(A[i]<B[j])
                i++;
            else if(A[i]>B[j])
                j++;
            else
            {
                res[k]=A[i];
                i++;
                j++;
                k++;
            }
        }
        for(i=0;i<k;i++)
            printf("%d ",res[i]);
}
