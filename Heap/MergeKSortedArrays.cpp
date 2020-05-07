void swap(int *arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void swim(int i,int *res)
{
    if(i==0)return;
    int p=(i-1)/2;
    if(res[p]<res[i])
    {
        swap(res,p,i);
        swim(p,res);
    }
}
void build(int *res,int i,int elem)
{
    res[i]=elem;
    swim(i,res);
}
void sink(int i,int *arr,int n)
{
    if(i>=n)return;
    int max=i,L=2*i+1,R=2*i+2;
    if(L<n&&arr[L]>arr[max])max=L;
    if(R<n&&arr[R]>arr[max])max=R;
    if(i!=max)
    {
        swap(arr,i,max);
        sink(max,arr,n);
    }
}
void heapsort(int *res,int n)
{
    if(n==0)return;
    swap(res,0,n-1);
    n--;
    sink(0,res,n);
    heapsort(res,n);
}
int *mergeKArrays(int arr[][N], int k)
{
//code here
   int *res=(int *)malloc(sizeof(int)*k*N);
   int i=0,j=0,len=0;
   for(i=0;i<k;i++)
   {
       for(j=0;j<k;j++)
        build(res,len++,arr[j][i]);
   }
   heapsort(res,len);
   return res;
}
