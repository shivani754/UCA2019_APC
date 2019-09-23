#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s1="",s2="",s3="";
    cin>>s1>>s2>>s3;
    int i=0,j=0,k=0;
    while(i<s1.length()&&j<s2.length()&&k<s3.length())
    {
        if(s1[i]==s2[j]&&s2[j]==s3[k])
        {
            i++;
            j++;
            k++;
        }
        else break;
    }
    cout<<i;
}
/*
char* longestCommonPrefix(char** A, int n1) {
    if(n1==1)
    return A[0];
    int i=0,j=0,min=INT_MAX;
    for(i=0;i<n1;i++)
    {
       //printf("%d\n",strlen(A[i]));
        if(strlen(A[i])<min)
        min=strlen(A[i]);
    }
    i=0;
    while(i<min)
    {
        j=0;
        while(j<n1-1)
        {
            if(A[j][i]==A[j+1][i])
            j++;
            else break;
        }
        if(j==(n1-1))
        i++;
        else break;
    }
    char *res=(char*)malloc(sizeof(char)*i);
    for(j=0;j<i;j++)
    res[j]=A[0][j];
    return res;
}
*/
