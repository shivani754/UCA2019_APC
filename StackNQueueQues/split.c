#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    gets(arr);
    char* tok = strtok(arr, ".");
    char* a[3]={NULL};
int count =0;
    while(tok)
    {


        a[count] = (char*) malloc(sizeof(char)* (strlen(tok)+1));
        strcpy(a[count], tok);
        printf("%s\n", a[count]);
        count++;




       /* printf("num =%d\n", num);*/
        tok= strtok(NULL ,".");

    }
}
