#include<stdio.h>
#include<string.h>
typedef struct stack
{
    char data;
    struct stack*next;
}stack;
int prec(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='-'||c=='+')
        return 1;
    else return -1;
}
void push(stack **top,char val)
{
    stack * temp=(stack*)malloc(sizeof(stack));
    if(!temp)
        {
            printf("stack is full\n");
            return;
        }
    temp->data=val;
    temp->next=(*top);
    *top=temp;
}
void pop(stack **top)
{
    stack* temp=*top;
    *top=temp->next;
    free(temp);
    temp=NULL;
}
char peek(stack *top)
{
    char t;
    if(!isEmpty(top))
    t=top->data;
    else return;
    return t;
}
int isEmpty(stack *top)
{
    return top==NULL;
}
int main()
{
    stack *top=NULL;
    char *s=(char*)malloc(sizeof(char));
   /* char s[8]="a+b*c+d";*/
   scanf("%s",s);
   char *ns=(char*)malloc(sizeof(char));
    int i=0;
 /*   for(i=0;s[i]!='\0';i++)
        scanf("%c",&s[i]);
        fflush(stdin);
    for(i=0;s[i]!='\0';i++)
        printf("%c",s[i]);*/
    i=0;int j=0;
    while(i<strlen(s))
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                ns[j]=s[i];
                j++;
            }
        else if(prec(s[i])>prec(peek(top))||isEmpty(top)||s[i]=='(')
            push(&top,s[i]);
        else if(s[i]==')')
       {
           while(!isEmpty(top)&&peek(top)!='(')
           {
               ns[j]=peek(top);
               pop(&top);
               j++;
           }
           if(peek(top)=='(')
                pop(&top);
       }
        else
        {
            while(prec(s[i])<=prec(peek(top))&&!isEmpty(top)&&peek(top)!='(')
            {
                ns[j]=peek(top);
              pop(&top);
              j++;
            }
            push(&top,s[i]);
        }
       i++;

    }
    while(!isEmpty(top))
    {
        ns[j]=peek(top);
        pop(&top);
        j++;
    }
    ns[j]='\0';
   /* for(i=0;i<j;i++)*/
        printf("%s",ns);
}
