#include<stdio.h>
int main()
{
    int n1;
    scanf("%d",&n1);
    int i=0;
    int A[n1],max=0,area=0,index=0;
    for(i=0;i<n1;i++)
        {
            scanf("%d",&A[i]);
            if(max<A[i])
                {
                    max=A[i];
                    index=i;
                }
        }
    int secMax=A[0];
    for(i=1;i<index;i++)
    {
        if(A[i-1]>=A[i])
        {
            if(secMax>A[i-1])
            {
                area+=(secMax-A[i]);
                 /*secMax=A[i-1];*/
            }
            else
            {
                area+=(A[i-1]-A[i]);
            }
        }
        else if(secMax>A[i])
         area+=(secMax-A[i]);
         if(secMax<A[i])
            secMax=A[i];
    }
    secMax=A[n1-1];
    for(i=n1-2;i>index;i--)
    {
        if(A[i+1]>=A[i])
        {
            if(secMax>A[i+1])
            {
                area+=(secMax-A[i]);
                 /*secMax=A[i-1];*/
            }
            else
            {
                area+=(A[i+1]-A[i]);
            }
        }
        else if(secMax>A[i])
         area+=(secMax-A[i]);
         if(secMax<A[i])
            secMax=A[i];
    }
    printf("area : %d",area);
}
