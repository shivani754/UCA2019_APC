#include<stdio.h>
#include<string.h>
int main()
{
    printf("enter string:");
    char *s=(char*)malloc(sizeof(char));
    scanf("%s",s);
   /* char s[]="A man, a plan, a canal: Panama";*/
   char *tok=strtok(s, " :().\",>");
    char *str=(char *)malloc(sizeof(char));
   while (tok!= NULL) {
       str=(char *)realloc(str,sizeof(char)*(strlen(tok)+strlen(str)));
        strcat(str,tok);
        tok = strtok(NULL, " :().\",>");
    }
     int i=0,j=strlen(str)-1;
    for(i=0;i<strlen(str)/2;)
    {
        if(str[i]>=65&&str[i]<=90)
            str[i]+=32;
        if(str[j]>=65&&str[j]<=90)
            str[j]+=32;
        if(str[i]==str[j])
        {
            j--;
            i++;
        }
        else break;

    }

    if(i==strlen(str)/2)
        printf("yes");
    else printf("no");
}
