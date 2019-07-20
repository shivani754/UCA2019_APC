#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of the matrix:";
    cin>>n;
    int a[n][n];
    int i=0,j=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
        int c=0,r=0;
    for(i=0;i<n;i++)
          if(a[0][i]==0)
          break;
      if(i==n)r=1;
    for(i=0;i<n;i++)
      if(a[i][0]==0)
          break;
    if(i==n)c=1;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i][j]==0)
            {
                a[0][j]=0;
                a[i][0]=0;
                break;
            }
        }

    }
     for(i=0;i<n;i++)
        if(a[0][i]==0)
      {
         for(j=0;j<n;j++)
            a[j][i]=0;
        // break;
      }

       for(i=1;i<n;i++)
        if(a[i][0]==0)
      {
         for(j=1;j<n;j++)
            a[i][j]=0;
         //break;
      }
     if(r==0)
        for(i=0;i<n;i++)
        a[0][i]=0;
     if(c==0)
        for(i=0;i<n;i++)
        a[i][0]=0;
     for(i=0;i<n;i++)
     {
         cout<<"\n";
         for(j=0;j<n;j++)
            cout<<a[i][j];
     }

}
