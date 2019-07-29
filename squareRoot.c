#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    long long int l=0,r=n/2,mid=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(mid*mid>n)
            r=mid-1;
        else if(mid*mid<n)
            l=mid+1;
        else break;
    }
    if(l>r) printf("squareroot is:%lld",r);
    else printf("squareroot is:%lld",mid);
}
