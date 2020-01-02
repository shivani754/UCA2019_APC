#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string st;
	    cin>>st;
	    int res[st.length()]={0};
	    int i=0,j=0,max=0;
	    for(i=1;i<st.length();i++)
	    {
	        if(st[i]==')')
	        for(j=i-1;j>=0;j--)
	        {
	            if(st[j]=='('&&res[j]==0)
	            {
	                res[i]=max+2;
	                max=res[i];
	                res[j]=res[i];
	                break;
	            }
	        }
	      //  else res[i]=res[i-1];
	    }
	    int temp=0;max=0;
	    for(i=0;i<st.length();i++)
	    {
	        if(res[i]>0)
	        temp++;
	        else
	        {
	            if(temp>max)
	            max=temp;
	            temp=0;
	        }
	    }
	    if(temp>max)max=temp;
	    cout<<max<<endl;
	}
	return 0;
}
