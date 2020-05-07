#include<iostream>
using namespace std;
int arr[20];
int len=0;
void swap(int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void swim(int i)
{
    if(i==0) return;
    int p=i/2;
    if(arr[p]<arr[i])
    {
        swap(p,i);
        swim(p);
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
void insert1(int k)
{
    arr[len++]=k;
    swim(len-1);
}
int get_max()
{
    return arr[0];
}
int del_max()
{
    int k=get_max();
    swap(0,len-1);
    len--;
    sink(0);
    return k;
}
int main()
{
    insert1(9);
    insert1(3);
    insert1(8);
    insert1(1);
    insert1(2);
    insert1(7);
    insert1(5);
    insert1(-1);
    insert1(0);
    cout<<get_max();
    cout<<del_max();
    //insert1(10);
    cout<<get_max();
}
