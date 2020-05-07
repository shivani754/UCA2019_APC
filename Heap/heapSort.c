#include<stdio.h>
int len=0;
int arr[20];
void swap(int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void heapify(int i)
{
    if(i==0)return ;
    int p=i/2;
    if(arr[p]<arr[i])
    {
        swap(p,i);
        heapify(p);
    }
}
void sink(int i)
{
    if(i>=len)
        return;
    int max1=i;int L=2*i,R=2*i+1;
    if(L<len&&arr[L]>arr[max1]) max1=L;
    if(R<len&&arr[R]>arr[max1]) max1=R;
    if(i!=max1)
    {
        swap(i,max1);
        sink(max1);
    }
}
void heapSort(int arr[])
{
    if(len==0)return;
    swap(0,len-1);
    len--;
    sink(0);
    heapSort(arr);
}
void insert(int n)
{
    arr[len++]=n;
    heapify(len-1);
}
int main()
{
    int n=-1;
    while(n!=0)
    {
        scanf("%d",&n);
        insert(n);
    }
    n=len;
    int i=0;
    heapSort(arr);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
