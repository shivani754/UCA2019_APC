#include <iostream>
#include<limits.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int res[n+1][k+1];
	    int i=0,x=0,j=0;
	    for(i=1;i<=n;i++)
	    {
	        res[i][0]=0;
	        res[i][1]=1;
	    }
	    for(j=1;j<=k;j++)
	    res[1][j]=j;
	    int temp=0;
	    for(i=2;i<=n;i++)
	    {
	        for(j=2;j<=k;j++)
	        {
	            res[i][j]=INT_MAX;
	            for(x=1;x<=j;x++)
	            {
	                temp=1+max(res[i-1][x-1],res[i][j-x]);
	                if(temp<res[i][j])
	                res[i][j]=temp;
	            }
	        }
	    }
	    cout<<res[n][k]<<endl;
	}
	return 0;
}
