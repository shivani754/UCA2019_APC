#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s1="",s2="",s3="";
    cin>>s1>>s2;
    if(s2.length()>s1.length())
    {
        string s4=s2;
        s2=s1;
        s1=s4;
    }
   int i=s1.length()-1,j=s2.length()-1;
   int n1=0,carry=0;
    while(j>=0)
    {
        int n1=(s1[i]-48)+(s2[j]-48)+carry;
        if(n1==1)
        {
            s3+=49;
            carry=0;
        }
       else if(n1==0)
        {
            s3+=48;
            carry=0;
        }
        else if(n1==3)
       {
           s3+=49;
           carry=1;
       }
       else
       {
           s3+=48;
           carry=1;
       }
       i--;
       j--;
    }
    while(i>=0)
    {
        int n1=(s1[i]-48)+carry;
        if(n1==1)
        {
            s3+=49;
            carry=0;
        }
       else if(n1==0)
        {
            s3+=48;
            carry=0;
        }
       else if(n1==3)
       {
           s3+=49;
           carry=1;
       }
       else
       {
           s3+=48;
           carry=1;
       }
       i--;
    }
    if(carry==1)
    s3+=49;
    reverse(s3.begin(),s3.end());
        cout<<s3;
}
