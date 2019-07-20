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
    /*for(i=0;i<n;i++)   //transpose
        for(j=i;j<n;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            //swap(a[i][j],a[j][i]);
        }
        for(i=0;i<n;i++)
          for(j=0;j<n/2;j++)
            swap(a[i][j],a[i][n-1-j]);*/

    //SECOND METHOD
    for(i=0;i<n/2;i++)
        for(j=i;j<n-1-i;j++)
    {
        int temp=a[i][j];
        a[i][j]=a[n-1-j][i];
        a[n-1-j][i]=a[n-1-i][n-1-j];
        a[n-1-i][n-1-j]=a[j][n-1-i];
        a[j][n-1-i]=temp;
    }
        for(i=0;i<n;i++)
        {
            cout<<"\n";
            for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        }
}
