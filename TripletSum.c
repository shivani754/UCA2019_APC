#include<stdio.h>
int cmp(void *a,void *b)
{
    return *(int *)a - *(int *)b;
}
main()
{
    int n1,T;
    printf("enter the size of array:");
    scanf("%d",&n1);
    int A[n1];
    int i=0;
    for(i=0;i<n1;i++)
        scanf("%d",&A[i]);
        printf("enter the target:");
    scanf("%d",&T);
    qsort(A,n1,sizeof(A[0]),cmp);
    int j=0,k=0;
    int min=A[0]+A[1]+A[n1-1];
    for(i=0;i<n1-2;i++)
    {
        j=i+1;
        k=n1-1;
        while(j<k)
      {

     if(abs(min-T)>abs((A[i]+A[j]+A[k])-T))
        min=A[i]+A[j]+A[k];
        if((A[i]+A[j]+A[k])>T)
            k--;
        else
            j++;
      }
    }
    printf("Nearest to target:%d",min);
}

