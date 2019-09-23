#include<stdio.h>
#include<string.h>
typedef struct stack
{
    char data;
    struct stack *next;
}stack;
void push(stack **top,char val)
{
    stack * temp=(stack*)malloc(sizeof(stack));
    temp->data=val;
    temp->next=(*top);
    *top=temp;
}
char pop(stack **top)
{
    stack* temp=*top;
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
    char *ns=(char *)malloc(sizeof(char));
    ns='(';
    int i=0;
    while(i<strlen(s))
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            push(&top,s[i]);
        else
        {
           char op2=pop(&top);
            char op1=pop(&top);
            printf("%c %c\n",op1,op2);
            strcat(ns,op1);
            strcat(ns,s[i]);
            strcat(ns,op2);
            strcat(ns,')');
             printf("%s\n",ns);
        }
        i++;
    }
    printf("%s",ns);
}








/*#include<stdio.h>
#include<string.h>
typedef struct stack
{
    struct stack *next;
     char data[];
}stack;
void push(stack **top,char val[])
{
 printf("***");int i=0;
 for(i=0;i<strlen(val);i++)
        printf("%c",val[i]);
    stack * temp=(stack*)malloc(sizeof(stack));
   /* strcpy(temp->data,val);
    for(i=0;i<strlen(val);i++)
        temp->data[i]=val[i];
    temp->next=(*top);
    *top=temp;
    /* if ( temp!= NULL )
   {
      temp->data = val;
      temp->next=(*top);
    *top=temp;
   }*/
   /* if(!temp)
        {
            printf("stack is full\n");
            return;
        }


}
char* pop(stack **top)
{
    stack* temp=*top;
    char *str=(char *)malloc(sizeof(char));
    strcpy(str,temp->data);
    *top=temp->next;
    free(temp);
    temp=NULL;
    return str;
}
int isEmpty(stack *top)
{
    return top==NULL;
}
int main()
{
    stack *top=NULL;
    stack t;
    char *s=(char *)malloc(sizeof(char));
    scanf("%s",s);
/*    t.data=(char *)malloc(sizeof(char)*strlen(s));*/
    /*char *ns=(char*)malloc(sizeof(char));
    int i=0;
    while(i<strlen(s))
    {
        /*printf("%c",s[i]);
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            push(&top,s[i]);
        else
        {
            char *op1=(char *)malloc(sizeof(char));
            op1=pop(&top);
             char *op2=(char *)malloc(sizeof(char));
            op2=pop(&top);
           /* printf("%s %s\n",op1,op2);
            strcat("(",op1);
            strcat(op1,s[i]);
            strcat(op1,op2);
            strcat(op1,")");
            push(&top,op1);
        }
        i++;
    }
    printf("%s",pop(&top));
}*/
