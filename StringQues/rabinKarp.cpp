#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string text="",pattern="";
  cin>>text>>pattern;
  int prime=3;
  int i=0,hash1=0,ex=0;
  for(i=0;i<pattern.length();i++)
  {
      hash1+=pattern[i]*pow(prime,ex);
      ex+=1;
  }
  ex=0;
  int hash2[text.length()-pattern.length()];
  hash2[0]=0;
  for(int k=0;k<pattern.length();k++)
  {
      hash2[0]+=text[k]*pow(prime,ex);
      ex+=1;
  }
  for(i=1;i<text.length()-pattern.length()+1;i++)
  {
      hash2[i]=((hash2[i-1]-text[i-1])/prime)+text[i+pattern.length()-1]*pow(prime,pattern.length()-1);
      if(hash2[i]==hash1)
      {
          int j=i,k=0;
          for(j=i;j<i+3;j++)
          {
              if(text[j]==pattern[k])
              {
                  k++;
                  continue;
              }
              else break;
          }
          if(j==(i+3))
            break;
      }
  }
  if(i<text.length()-pattern.length()+1)
    printf("pattern exist at index %d",i);
  else printf("pattern don't exist");
}
