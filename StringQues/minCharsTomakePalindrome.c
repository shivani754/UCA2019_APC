#include<stdio.h>
#include<string.h>
int main()
{
    char *s=(char*)malloc(sizeof(char));
    scanf("%s",s);
    int i=0,j=0,tot=1;
    int l=0,r=0;
    /*if(s[0]==s[1])
        tot=2;
    else tot=1;*/
    for(i=1;i<strlen(s)-1;i++)
    {
        l=i-1;
        r=i;
        while(l>=0 &&r<strlen(s)&&s[l]==s[r])
        {
            l--;
            r++;
            if((r>tot)&&l==-1)
            tot=r;
        }
        l=i-1;
        r=i+1;
        while(l>=0 &&r<strlen(s)&&s[l]==s[r])
        {
            l--;
            r++;
            if((r>tot)&&l==-1)
            tot=r;
        }
    }
    printf("Chars required to make string palindrome is:%d",strlen(s)-tot);
   /* int z[strlen(s)];
 int i=0,j=0;
 for(i=0;i<=strlen(s);i++)
    z[i]=0;
int l=1,r=1;
 for(i=1;i<strlen(s);i++)
 {
     if(i>=r)
     {
         l=i;
         r=i;
         while(s[r]==s[r-l])
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
              while(s[r]==s[r-l])
            r++;
         z[i]=r-l;
         }
     }
 }
 for(i=0;i<strlen(s);i++)
        printf("%d ",z[i]);
        if(z[i-1]==0)
        printf("Chars required to make string palindrome is:%d",strlen(s)-1);
    else
    {
            j=i-1;int tot=0;
        while(z[j]!=0)
        {
            tot+=z[j];
            j--;
        }
        tot+=z[j];
        printf("Chars required to make string palindrome is:%d",strlen(s)-tot);
    }*/
   /* int lps[strlen(s)];
    int i=0,j=0;
    lps[0]=0;
     for(j=1;j<strlen(s);)
    {
        if(s[i]==s[j])
        {
            lps[j++]=i+1;
            i++;
        }
        else
        {
            if(i==0)
                lps[j++]=0;
            else i=lps[i-1];
        }
    }
    for(i=0;i<j;i++)
        printf("%d ",lps[i]);
    if(lps[j-1]==0)
        printf("Chars required to make string palindrome is:%d",strlen(s)-1);
    else
    {
            j=j-1;int tot=0;
        while(lps[j]==lps[j-1])
        {
            tot+=lps[j];
            j--;
        }
        tot+=lps[j];
        printf("Chars required to make string palindrome is:%d",strlen(s)-tot-1);
    }
    /*printf("Chars required to make string palindrome is:%d",strlen(s)-lps[j-1]);AACECAAAA*/
}
