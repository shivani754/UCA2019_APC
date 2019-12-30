#include<iostream>
using namespace std;
int main()
{
    int m,n,i=0,j=0;
    cout<<"enter types of coins:";
    cin>>n;
    int type[n];
    for(i=0;i<n;i++)
        cin>>type[i];
    cout<<"enter the sum:";
    cin>>m;
    int arr[n+1][m+1];
    for(i=0;i<n+1;i++)
        arr[i][0]=1;
    for(i=0;i<m+1;i++)
        arr[0][i]=0;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<m+1;j++)
        {
            if(j<type[i-1])arr[i][j]=arr[i-1][j];
            else arr[i][j]=arr[i-1][j]+arr[i][j-type[i-1]];
        cout<<arr[i][j]<<" ";
         }
        cout<<endl;
    }
    cout<<"ways:"<<arr[n][m];
}
