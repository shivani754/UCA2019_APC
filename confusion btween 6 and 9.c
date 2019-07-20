#include<stdio.h>
int rev(int);
main()
{
    int t,n,i,r=0,R=0;
    printf("enter no.of test cases:");
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
        for(i=0;i<t;i++)
       {
           n=a[i];
          R=rev(n);
         printf("%d\n",R-n);
        }

}
int rev(int n)
{  int r=0,R=0;
    if(n==0)
        return ;
    else
    {
      r=n%10;
         if(r==6)
            {r=9;
            R=r;
          }
          else
            R=r;

     R=R+ rev(n/10)*10;

return R;
    }



}
