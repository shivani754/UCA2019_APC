#include<stdio.h>
#include<string.h>
int main()
{
    char *s=(char*)malloc(sizeof(char));
    scanf("%s",s);
    char *tok=strtok(s," ");
    int count=0;
    char *str=(char *)malloc(sizeof(char));
   while (tok!= NULL) {
        str=(char *)realloc(str,sizeof(char)*strlen(tok));
		strcpy(str,tok);
		tok = strtok(NULL, " ");
	}
   printf("%d",strlen(str));
}
