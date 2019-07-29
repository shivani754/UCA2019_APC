#include<stdio.h>
#include<stdlib.h>
/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 *
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* maxone(int* A, int n1, int B, int *len1) {
    int l=0,r=0,max=0,count_zero=B,left=0,right=0;
    int *res=(int *)malloc(sizeof(int)*n1);
    while(r<n1)
    {
        if(A[r]==1)
        r++;
        else if(A[r]==0 && count_zero)
        {
            r++;
            count_zero--;
        }
        else
        {

            while(A[l]!=0)
            l++;
            l++;
            if(count_zero<B)
            count_zero++;
        }
         if(l>r)r=l;
     if(max<(r-l))
            {
                max=r-l;
                left=l;
                 right=r;
            }
    }
    int i=0;
    for(i=0;i<max;i++)
    res[i]=left+i;
    *len1=max;
    return res;
}

int main()
{
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int K;
    printf("Enter the number of zeroes to be flipped:");
    scanf("%d",&K);
        int m=0;
    int a[m]=maxone(arr,n,K,&m);
    for(i=0;i<m;i++)
        printf("%d ",a[i]);

}

