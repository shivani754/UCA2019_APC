#include<iostream>
using namespace std;
int main()
{
    int n,i=0,j=0;
    cout<<"enter number:";
    cin>>n;
    int arr[n+1][n+1];
    for(i=0;i<n;i++)
      {
         for(j=0;j<n;j++)
            arr[i][j]=0;
         arr[i][0]=1;
      }
    cout<<arr[0][0]<<endl;
    for(i=1;i<n;i++)
    {
        cout<<arr[i][0]<<" ";
        for(j=1;j<n;j++)
        {
            if(arr[i-1][j]==0)
            {
                arr[i][j]=1;
                break;
            }
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<arr[i][j]<<endl;
    }

}

