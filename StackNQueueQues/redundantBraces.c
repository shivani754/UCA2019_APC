#include<stdio.h>
#include<string.h>
typedef struct stack
{
    char data;
    struct stack *next;
}stack;
void push(stack **top,char val)
{
    stack *temp=(stack*)malloc(sizeof(stack));
    temp->data=val;
    temp->next=*top;
    *top=temp;
}
char pop(stack **top)
{
    stack *temp=*top;
    char c=temp->data;
    *top=temp->next;
    free(temp);
    temp=NULL;
    return c;
}
int isEmpty(stack *top)
{
    return top==NULL;
}
int main()
{
    stack *top=NULL;
    char *s=(char *)malloc(sizeof(char));
    scanf("%s",s);
    int i=0;
    while(i<strlen(s))
    {
        if(s[i]!=')')
            push(&top,s[i]);
        else
        {
            char c=pop(&top);
            int flag=1;
            while(c!='(')
                {
                    if(c=='+'||c=='*'||c=='-'||c=='/')
                    flag=0;
                    c=pop(&top);
                }
           if(flag==1)
           {
            printf("redundant");
            return 0;
           }
        }
        i++;
    }
    printf("not redundant");
}
