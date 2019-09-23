#include<stdio.h>
#include<string.h>
typedef struct stack
{
    int data;
    struct stack *next;
}stack;
void push(stack **top,int val)
{
    stack * temp=(stack*)malloc(sizeof(stack));
    temp->data=val;
    temp->next=(*top);
    *top=temp;
}
int pop(stack **top)
{
    stack* temp=*top;
    int c=temp->data;
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
   /* char *s=(char *)malloc(sizeof(char));
    scanf("%s",s);*/
    int n1;
    printf("enter size:");
    scanf("%d",&n1);
    char **s=(char**)malloc(sizeof(char*)*n1);
    int i=0,tot=0;
    printf("enter value:\n");
    for(i=0;i<n1;i++)
    {
        s[i]=(char*)malloc(sizeof(char));
        scanf("%s",&s[i][0]);
    }
    fflush(stdin);
    i=0;
   while(i<n1)
    {

       char c=s[i][0];
       int n=atoi(s[i]);
        if(n>=1&&n<=2147483647||n>=-2147483648&&n<=-1)
            push(&top,n);
        else
        {
            int op1=pop(&top);
            int op2=pop(&top);
            if(c=='+')tot+=(op1+op2);
            else if(c=='-')tot+=(op2-op1);
            else if(c=='*')tot+=(op1*op2);
            else tot+=(op2/op1);
            push(&top,tot);
            tot=0;
        }
        i++;
    }
    printf("%d",pop(&top));
}

