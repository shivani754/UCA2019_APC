#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int main()
{
    int m,n,i=0,j=0;
    cout<<"enter no.of rods:";
    cin>>m;
    int len[m],prof[m];
    for(i=0;i<m;i++)
        cin>>len[i];
    for(i=0;i<m;i++)
        cin>>prof[i];
    cout<<"enter the length of rod required:";
    cin>>n;
    int arr[m][n];
    for(i=0;i<m;i++)
        arr[i][0]=1;
    for(i=0;i<n;i++)
        arr[0][i]=i+1;
 for(i=1;i<m;i++)
 {
     for(j=1;j<n;j++)
     {
         if((j+1)<len[i])
            arr[i][j]=arr[i-1][j];
        else if(len[i]>j)arr[i][j]=max(arr[i-1][j],prof[i]);
         else arr[i][j]=max(arr[i-1][j],arr[i][j-len[i]]+prof[i]);
         cout<<arr[i][j]<<" ";
     }
   //  cout<<arr[i][j];
     cout<<endl;
 }
 cout<<"maximum profit is:"<<arr[m-1][n-1];
}
