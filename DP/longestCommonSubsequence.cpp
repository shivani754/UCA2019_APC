#include <iostream>
#include<string.h>
using namespace std;
int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2;
	    cin>>n1>>n2;
	    string str1="",str2="";
	    cin>>str1>>str2;
	    int i=0,j=0;
	    int arr[n1+1][n2+1];
	    for(i=0;i<n2+1;i++)
	    arr[0][i]=0;
	    for(i=0;i<n1+1;i++)
	    arr[i][0]=0;
	    for(i=1;i<n1+1;i++)
	    {
	        for(j=1;j<n2+1;j++)
	        {
	            if(str1[i-1]==str2[j-1])
	             arr[i][j]=arr[i-1][j-1]+1;
	            else
	            arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
	        }
	    }
	    cout<<arr[n1][n2]<<endl;
	}
	return 0;
}
