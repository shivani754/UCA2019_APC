#include<stdio.h>
#include<math.h>
double medianArr(int *,int,int *,int);
main()
{
    int n1,n2;
    printf("enter the size of first array:");
    scanf("%d",&n1);
    int A[n1];
    int i=0,j=0;double res=0;
    for(i=0;i<n1;i++)
        scanf("%d",&A[i]);
    printf("enter the size of second array:");
    scanf("%d",&n2);
    int B[n2];
     for(i=0;i<n2;i++)
        scanf("%d",&B[i]);
    int mid,z,y=n1+n2;
    if(n1<=n2)
      res=medianArr(A,n1,B,n2);
    else
       res= medianArr(B,n2,A,n1);
       printf("median is:%g",res);
}
double findMedianSortedArrays(const int* A, int n1, const int* B, int n2) {
    int mid,z,y=n1+n2;
    double res;
    if(n1<=n2)
      res=medianArr(A,n1,B,n2);
    else
       res= medianArr(B,n2,A,n1);
      return res;
}
double medianArr(int *A,int n1,int *B,int n2)
{
    double median;
     if(n1==0)
    {
        if(n2%2==0)
            median=(B[n2/2] +B[(n2-1)/2])/2.0;
        else
            median=B[n2/2];
        return median;
    }
    int x=n1/2;
    int z=0,y=n1+n2;
    z=(y+1)/2-x;
    while(x<=n1 && z<=n2)
    {
        int minleftA=(x==0?-2147483648:A[x-1]);
        int maxrytA=(x==n1?2147483647:A[x]);
        int minleftB=(z==0?-2147483648:B[z-1]);
        int maxrytB=(z==n2?2147483647:B[z]);
        /*if(x==0)x=INT_MIN;
        if(x==n1)x=INT_MAX;*/
        if(minleftA<=maxrytB&&minleftB<=maxrytA)
        {

            int max=minleftA>minleftB?minleftA:minleftB;
            int min=maxrytA<maxrytB?maxrytA:maxrytB;
            if(y%2==0)
            median=(max+min)/2.0;
            else
             median=max;
            return median;
        }
        else if(minleftB>maxrytA)
        {
            x++;
            z--;
        }
        else if(minleftA>maxrytB)
        {
            x--;
            z++;
        }
    }
    /*return 0;*/
}


