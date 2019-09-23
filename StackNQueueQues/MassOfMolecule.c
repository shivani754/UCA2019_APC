#include<stdio.h>
#include<string.h>
typedef struct stack
{
    int data;
    struct stack*next;
}stack;
void push(stack **top,int val)
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
int pop(stack **top)
{
    int t;
    stack* temp=*top;
    t=temp->data;
    *top=temp->next;
    free(temp);
    temp=NULL;
    return t;
}
int peek(stack *top)
{
    int t;
    if(!isEmpty(top))
    t=top->data;
    else return;
    return t;
}
int isEmpty(stack *top)
{
    return top==NULL;
}
int mass(char c)
{
    if(c=='C')
    return 12;
    else if(c=='O')
        return 16;
    else if(c=='H')
        return 1;
    else if(c=='(')
        return -1;
}
int main()
{
    /*char *s="((CH)2(OH2H)(C(H))O)3";*/
    char *s=(char*)malloc(sizeof(char));
    scanf("%s",s);
    stack *top=NULL;
    int i=0;
    push(&top,mass(s[i]));
    for(i=1;i<strlen(s);i++)
    {
        if(s[i]=='C'||s[i]=='O'||s[i]=='H'||s[i]=='(')
            push(&top,mass(s[i]));
        else if(s[i]>=50&&s[i]<=57)
          push(&top,pop(&top)*(s[i]-48));
        else if(s[i]==')')
        {
            int tot=0;
            while(peek(top)!=-1)
                tot+=pop(&top);
            pop(&top);
            push(&top,tot);
        }

    }
    int totMass=0;
    while(!isEmpty(top))
        totMass+=pop(&top);
    printf("Mass of a molecule : %d",totMass);
}
