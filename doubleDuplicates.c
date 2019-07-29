#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int j=0,count=1,k=0;
   /* for(i=1;i<n;i++)
    {k=i-1;
        if(arr[i]!=arr[k])
        {
            if(count>=2)
            {
                j++;
                arr[j]=arr[i-1];
                arr[j+1]=arr[i];
                j++;
                count=1;
            }
            else if(count==1)
            {
                j++;
                arr[j]=arr[i];
            }
        }
        else count++;
    }
    for(i=0;i<j+1;i++)
        printf("%d ",arr[i]);
    */

/******SECOND METHOD**********/
for(i=0;i<n;i++)
{
    if(arr[i]==arr[i+1]&& arr[i]==arr[i+2] &&i<n-2)
        continue;
    else
        {
            arr[j]=arr[i];
            j++;
        }
}
    for(i=0;i<j;i++)
        printf("%d ",arr[i]);
}
/*
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3
*/
