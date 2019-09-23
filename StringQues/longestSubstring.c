#include<stdio.h>
#include<string.h>
int main()
{
    char *s=(char*)malloc(sizeof(char));
    scanf("%s",s);
    int i=0,j=0,tot=1;
    int l=0,r=0;
    int L=0,R=0;
    /*if(s[0]==s[1])
        tot=2;
    else tot=1;*/
    for(i=1;i<strlen(s);i++)
    {
        l=i-1;
        r=i;
        while(l>=0 &&r<strlen(s)&&s[l]==s[r])
        {
            if(r-l+1>tot)
            {
                tot=r-l+1;
                R=r;
                L=l;
            }
             l--;
            r++;
        }
        l=i-1;
        r=i+1;
        while(l>=0 &&r<strlen(s)&&s[l]==s[r])
        {
            if(r-l+1>tot)
            {
                tot=r-l+1;
                R=r;
                L=l;
            }
             l--;
            r++;
        }
    }
    char str[tot];
    for(i=L;i<=R;i++)
        str[j++]=s[i];
    printf("longest palindrome substring:%s",str);
}
