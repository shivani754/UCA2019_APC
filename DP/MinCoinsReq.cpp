#include<iostream>
using namespace std;
int cmp(const void * a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}
int main()
{
    int m,n,i=0,j=0,min1=INT_MAX,count=1;
    cout<<"enter types of coins:";
    cin>>n;
    int type[n];
    for(i=0;i<n;i++)
        cin>>type[i];
    cout<<"enter the sum:";
    cin>>m;
    qsort(type,n,sizeof(int),cmp);
    int arr[n+1][m+1];
  //  for(i=0;i<n+1;i++)
    //    arr[i][0]=1;
    for(i=0;i<m+1;i++)
        arr[0][i]=INT_MAX;
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<m+1;j++)
        {
            if(j<type[i-1])arr[i][j]=arr[i-1][j];
            else if(j-type[i-1]==0)arr[i][j]=1;
            else arr[i][j]=min(arr[i-1][j],arr[i][j-type[i-1]])+1;
        cout<<arr[i][j]<<" ";
         }
          if(min1>arr[i][j-1])
         {
             min1=arr[i][j-1];
             count=1;
         }
         else if(min1==arr[i][j-1])count++;
        cout<<endl;
    }
    cout<<"minimum coins required and ways:"<<arr[n][m]<<" "<<count;
}
