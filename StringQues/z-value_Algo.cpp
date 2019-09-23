#include<iostream>
using namespace std;
int main()
{
  string str1="",str2="",str="";
  cin>>str2>>str;
  str1=str+"$"+str2;
    int z[str1.length()];
 int i=0;
 for(i=0;i<=str.length();i++)
    z[i]=0;
int l=1,r=1;
 for(i=str.length()+1;i<str1.length();i++)
 {
     if(i>=r)
     {
         l=i;
         r=i;
         while(str1[r]==str1[r-l])
            r++;
         z[i]=r-l;
     }
     else
     {
         if(z[i-l]+i<r)
            z[i]=z[i-l];
         else
         {
             l=i;
              while(str1[r]==str1[r-l])
            r++;
         z[i]=r-l;
         }
     }
 }
 //for(i=0;i<str1.length();i++)
   // cout<<z[i];
   for(i=0;i<str1.length();i++)
   {
       if(z[i]==str.length())
       {
           printf("pattern found at %d",i-str.length()-1);
           return 0;
       }
   }
   printf("pattern not found");
}
