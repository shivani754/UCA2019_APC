#include<stdio.h>
#include<string.h>
int main()
{
    char *s=(char*)malloc(sizeof(char));
    scanf("%s",s);
    int i=0,num=0;
    for(i=0;i<strlen(s);i++)
        num=num*10+(s[i]-48);
    if((num&(num-1))==0)
        printf("power of 2");
    else printf("not power of 2");
}
