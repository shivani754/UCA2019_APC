#include<stdio.h>
typedef struct stack
{
    int data;
    struct stack *next;
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
int main()
{
    stack *top1=NULL;
    stack *top2=NULL;
    int n;
    scanf("%d",&n);
    int i,elem;
    for(i=0;i<n;i++)
    {
        scanf("%d",&elem);
        while(!isEmpty(top1))
        {
            push(&top2,pop(&top1));
        }
        push(&top1,elem);
         while(!isEmpty(top2))
        {
            push(&top1,pop(&top2));
        }
    }
    while(!isEmpty(top1))
        printf("%d ",pop(&top1));
}
