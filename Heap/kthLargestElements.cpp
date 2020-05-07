#include <iostream>
using namespace std;
void swap(int *arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void swim(int i,int *arr)
{
    if(i==0)return;
    int p=(i-1)/2;
    if(arr[p]<arr[i])
    {
        swap(arr,p,i);
        swim(p,arr);
    }
}
void build(int elem,int *arr,int i)
{
    arr[i]=elem;
    swim(i,arr);
}
void sink(int i,int *arr,int *n)
{
    if(i>=*n)return;
    int max1=i,L=2*i+1,R=2*i+2;
    if(L<*n&&arr[L]>arr[max1])max1=L;
    if(R<*n&&arr[R]>arr[max1])max1=R;
    if(i!=max1)
    {
        swap(arr,i,max1);
        sink(max1,arr,n);
    }
}
int getMax(int *arr,int *n)
{
    int max=arr[0];
    swap(arr,0,*n-1);
    (*n)--;
    sink(0,arr,n);
    return max;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,elem;
	    cin>>n>>k;
	    int arr[n];
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>elem;
	        build(elem,arr,i);
	    }
	    while(k--)
	        cout<<getMax(arr,&n)<<" ";
	    cout<<endl;
	}
	return 0;
}
