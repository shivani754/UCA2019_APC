#include<stdio.h>
#include<string.h>
int main()
{
    char *str=(char *)malloc(sizeof(char));
    char *pattern=(char *)malloc(sizeof(char));
    printf("enter the string:");
    scanf("%s",str);
    fflush(stdin);
     printf("enter the pattern:");
    scanf("%s",pattern);
    fflush(stdin);
    int lps[strlen(pattern)];
    int i=0,j=1,k=1;
    lps[0]=0;int flag=0;
    for(j=1;j<strlen(pattern);)
    {
        if(pattern[i]==pattern[j])
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
    for(j=1;j<strlen(str);)
    {
        if(pattern[i]==str[j])
        {
            j++;
            i++;
           if(i==strlen(pattern))
           {
               flag=1;
               printf("substring found at:%d",j-i);
           }

        }
        else
        {
            if(i==0)
                j++;
            else i=lps[i-1];
        }
    }
    if(flag==0)
    printf("substring not found");
}
