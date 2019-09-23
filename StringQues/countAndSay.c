#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    char *s=(char *)malloc(sizeof(char));
     char *ns=(char *)malloc(sizeof(char));
    s[0]=49;
    s[1]='\0';
    if(n==1)
    {
        printf("%s",s);
        return;
    }
    int i=0,j=0,k=1;
    while(k<n)
    {
        j=0;
        int count=1;
        ns=(char *)realloc(ns,sizeof(char)*strlen(s)*2);
      for(i=1;i<strlen(s);i++)
      {
        if(s[i]==s[i-1])
            count++;
        else
        {
            ns[j++]=count+48;
            ns[j++]=s[i-1];
            count=1;
        }
      }
      ns[j++]=count+48;
      ns[j++]=s[i-1];
      ns[j++]='\0';
      k++;
     s=(char *)realloc(s,sizeof(char)*strlen(ns)*2);
      strcpy(s,ns);
    }
    printf("%s",ns);
}
