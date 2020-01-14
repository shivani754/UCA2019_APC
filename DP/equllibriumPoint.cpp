#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,arr[n];
	    for(i=0;i<n;i++)
	     cin>>arr[i];
	    int a[n]={0},b[n]={0};
	    a[0]=arr[0];b[n-1]=arr[n-1];
	    for(i=1;i<n;i++)
	      a[i]=a[i-1]+arr[i];
	    for(i=n-2;i>=0;i--)
	      b[i]=b[i+1]+arr[i];
	    for(i=0;i<n;i++)
	     {
	        // cout<<a[i]<<" "<<b[i]<<endl;
	         if(a[i]==b[i])
	         {
	           cout<<(i+1)<<endl;
	           break;
	         }
	     }
	     if(i==n)
	     cout<<"-1"<<endl;
	}
	return 0;
}
