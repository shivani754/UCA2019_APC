#include<stdio.h>
main()
{
    int n1,k;
    printf("enter the size of array:");
    scanf("%d",&n1);
    int A[n1];
    int i=0;
    for(i=0;i<n1;i++)
        scanf("%d",&A[i]);
        printf("enter the target:");
    scanf("%d",&k);
    i=0;
/********FIRST METHOD *************/
   /* for(i=0;i<n1;i++)
    {
        int sum=A[i]+k;
        int l=0,r=n1-1;
        int mid;
        while(l<r)
        {
            mid=(l+r)/2;
            if(sum==A[mid])
                break;
            else if(sum<A[mid])
                r=mid-1;
            else if(sum>A[mid])
                l=mid+1;
        }
        if(l!=r)
         {
             printf("%d %d",i,mid);
             break;
         }
    }
    if(i==n1)
       printf("No such indices occur");*/
/*******SECOND METHOD*******/
    int mid,t=0;
    mid=(n1-1)/2;
    while(mid<n1)
    {

        if(A[mid]<k)
            mid++;
        else
        {
            for(t=0;t<mid;t++)
                if((A[mid]-A[t])==k)
                break;
          if(t!=mid)
           {
            printf("%d %d",t,mid);
            break;
           }
         else mid++;
        }

    }
    if(mid==n1)
    printf("No such indices occur");
}
