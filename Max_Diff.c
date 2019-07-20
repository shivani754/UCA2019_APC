#include<stdio.h>
struct elem
{
    int val;
    int index;
};
int cmp(void *a,void *b)
{
    return ((((struct elem*)a)->val-((struct elem*)b)->val)>0);
}
int main()
{
    printf("enter size of array:");
    int n;
    scanf("%d",&n);
    int a[n];
    struct elem in[n];

    int i=0;
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        in[i].val=a[i];
            in[i].index=i;
        }
    qsort(in,n,sizeof(in[0]),cmp);
    int min=in[0].index,max=0;
    for(i=0;i<n;i++)
    {
        if((in[i].index-min)>max)
            max=in[i].index-min;
        else
            min=in[i].index<min?in[i].index:min;
    }
    printf("Max difference is:%d",max);

}
