#include<stdio.h>
typedef struct stack
{
    char data;
    struct stack *next;
}stack;
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
    stack * top=NULL;
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    char s[n];
    fflush(stdin);
    for(i=0;i<n;i++)
    scanf("%c",&s[i]);
    s[i]='\0';
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
              push(&top,s[i]);
        else
        {
            if(isEmpty(top))
              {
                  printf("Invalid");
                  return;
              }
              else if((s[i]=='}'&&peek(top)=='{')||(s[i]==')'&&peek(top)=='(')||(s[i]==']'&&peek(top)=='['))
                pop(&top);
              else
              {
                  printf("Invalid");
                  return;
              }
          /*  switch(s[i])
            {
            case ')':
                if(peek(top)=='(')
                    pop(&top);
                 break;
            case ']':
                if(peek(top)=='[')
                    pop(&top);
                 break;
            case '}':
                if(peek(top)=='{')
                    pop(&top);
                 break;
            default:
                printf("Invalid");
            }*/

        }
        i++;
    }
    if(isEmpty(top))
        printf("valid");
    else printf("Invalid");
    while(!isEmpty(top))
        pop(&top);

}
