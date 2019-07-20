#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the size of group:";
    int k;
    cin>>k;
    int i=0,j=0;
    for(i=0;i<n;i++)
        cin>>arr[i];

  /*  for(i=0;i<n/k*k;i+=k)
    {
       for(j=0;j<k/2;j++)
        swap(arr[j+i],arr[i+k-1-j]);
    }
      if(i!=n)
        {
           for(j=0;j<(n-i)/2;j++)
            swap(arr[j+i],arr[i+(n%k)-1]);
        }
*/
  for(i=0;i<n;i+=k)
    {
        if((i+k)<n)
       for(j=0;j<k/2;j++)
        swap(arr[j+i],arr[i+k-1-j]);

      else

           for(j=0;j<(n-i)/2;j++)
            swap(arr[j+i],arr[i+(n%k)-1]);
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
