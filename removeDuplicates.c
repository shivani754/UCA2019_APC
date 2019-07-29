#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int j=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    for(i=0;i<j+1;i++)
        printf("%d ",arr[i]);
}
