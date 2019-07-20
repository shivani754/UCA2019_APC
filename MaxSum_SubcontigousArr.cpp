#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    int i=0,sum=0,max=0;
    for(i=1;i<n;i++)
    {
        cin>>arr[i];
        if((sum+arr[i])>arr[i])
            sum+=arr[i];
        else
            sum=arr[i];
        if(sum>max)
            max=sum;
    }
    cout<<"maximum sum is:"<<max;
}
