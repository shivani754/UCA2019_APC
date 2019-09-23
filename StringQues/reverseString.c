#include<stdio.h>
int main()
{
    int n;
    printf("enter string:");
    char *s=(char *)malloc(sizeof(char));
    scanf("%s",s);
    int i=0,j=strlen(s)-1;
    for(i=0;i<strlen(s)/2;i++)
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;
    }
    printf("%s",s);
}
