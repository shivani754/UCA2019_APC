#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
/*void value(string s,unsigned long long int *num)
{
    int i=0;
    while(i<s.length())
    {
        *num=(*num)*10+(s[i]-48);
        i++;
    }
}*/
int main()
{
    string s1="",s2="",s3="",s4="";
    cin>>s1>>s2;
   // unsigned long long int n1=0,n2=0;
   int i=0;
   if((s1.length()==1&&s1[0]==48)||(s2.length()==1&&s2[0]==48))
   {
       cout<<to_string(0);
       return 0;
   }
   while(s2[i]==48)
        s2.erase(s2.begin()+i);
    i=0;
     while(s1[i]==48)
        s1.erase(s1.begin()+i);
    i=s2.length()-1;int j=s1.length()-1,count=0;
    for(i=i;i>=0;i--)
    {
        int carry=0;int n1=0;
        while(j>=0)
        {
            n1=(s1[j]-48)*(s2[i]-48)+carry;
            if(n1>=10)
            {
                int N=((n1%10)+48);
                s3+=N;
                n1/=10;
                carry=n1%10;
            }
            else
            {
                int N=n1+48;
                s3+=N;
                carry=0;
            }
         //  cout<<s3<<endl;
            j--;
        }
        if(carry>0)
            {
                int N=carry+48;
                s3+=N;
            }
        carry=0;
        if(i==s2.length()-1)
            s4=s3;
        else
        {
            int k=count,l=0;
            while(k<s4.length())
            {
                n1=(s4[k]-48)+(s3[l]-48)+carry;
            if(n1>=10)
            {
                int N=((n1%10)+48);
                s4[k]=N;
                n1/=10;
                carry=n1%10;
            }
            else
            {
                s4[k]=n1+48;
                carry=0;
            }
            k++;
            l++;
            }
          /*   while(l<s3.length())
            {
                int N=s3[l]+carry;
                s4+=N;
                l++;
            }*/
            //cout<<"***"<<carry<<"**"<<endl;
           while(l<s3.length())
            {
                n1=s3[l]+carry-48;
               // s4+=N;
               if(n1>=10)
            {
                int N=((n1%10)+48);
                s4+=N;
                n1/=10;
                carry=n1%10;
            }
            else
            {
                int N=n1+48;
                s4+=N;
                carry=0;
            }
                l++;
            }
            if(carry>0)
            {
                int N=carry+48;
                s4+=N;
            }
        }
        //cout<<"***"<<s4<<"**"<<endl;
        //cout<<s4<<endl<<s2[i]<<endl;
        s3="";
        count++;
        j=s1.length()-1;
    }
     reverse(s4.begin(), s4.end());
   // value(s1,&n1);
   // value(s2,&n2);
    cout<<s4;
}
/*5131848155574784703269632922904933776792735241197982102373370
56675688419586288442134264892419611145485574406534291250836"
048891709726710295693867975326545292678156461454673246558
050558806789375190779718843756214906856546883920634407877007871674796
*/
