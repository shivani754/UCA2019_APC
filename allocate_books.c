#include<stdio.h>
/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 *
 * @Output Integer
 */
int books(int* A, int n1, int B) {
    int l=0,r=0,mid=0;
    int i=0;
    for(i=0;i<n1;i++)
     {
         if(l<A[i])
         l=A[i];
         r+=A[i];
     }
     if(n1<B)return -1;
    while(l<r)
     {
        int count=1;
        mid=(l+r)/2;
        count=stu(A,n1,mid);
        if(count>B)
         l=mid+1;

        else if(count==B)
            r=mid;
        else
         r=mid-1;
     }
    if(l==r)return l;
    else return mid;
}
int stu(int A[],int n1,int mid)
{
    int i,sum=0,count=1;
    for(i=0;i<n1;i++)
        {
            if(sum+A[i]>mid)
            {
                sum=A[i];
                count++;
            }
            else sum+=A[i];
        }
    return count;
}
int main()
{
    int n,m;
    printf("enter the no. of books:");
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter number of students:");
    scanf("%d",&m);
    printf("%d",books(arr,n,m));
}
/*
97 26 12 67 10 33 79 49 79 21 67 72 93 36 85 45 28 91 94 57 1 53 8 44 68 90 24
*/
