#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	unsigned long long int  w,le;
	int n;
	cin>>n>>w>>le;
	int h[n][2];
	int i;
	for(i=0;i<n;i++)
	cin>>h[i][0]>>h[i][1];
	unsigned long long int l=0,r=pow(10,18),sum=0,mid;
	while(l<r)
	{
	    mid=(l+r)/2;
	    sum=0;
	    for(i=0;i<n;i++)
	    {
	        if((h[i][0]+h[i][1]*mid)>=le)
	        sum+=h[i][0]+h[i][1]*mid;
	        if(sum>=w)break;
	    }
	    if(sum<w)l=mid+1;
	    else r=mid;
	}
	if(l==r)cout<<l;
	else cout<<mid;
	return 0;
}
