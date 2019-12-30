#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter size:";
    cin>>n;
    int arr[n],res[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    res[n-1]=1;
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]*arr[i+1]<0)
            res[i]=res[i+1]+1;
        else res[i]=1;
    }
    for(i=0;i<n;i++)
        cout<<res[i]<<" ";
}
