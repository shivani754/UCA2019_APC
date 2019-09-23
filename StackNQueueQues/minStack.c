#include<stdio.h>
typedef struct stack
{
    int data;
    struct stack*next;
}stack;
void push(stack **top1,int val)
{
    stack * temp=(stack*)malloc(sizeof(stack));
    if(!temp)
        {
            printf("stack is full\n");
            return;
        }
    temp->data=val;
    temp->next=(*top1);
    *top1=temp;
}
int pop(stack **top1)
{
    if(top1==NULL)
        return;
    int t;
    stack* temp=*top1;
    t=temp->data;
    *top1=temp->next;
    free(temp);
    temp=NULL;
    return t;
}
int top(stack *top1)
{
    int t;
    if(!isEmpty(top1))
    t=top1->data;
    else return -1;
    return t;
}
int isEmpty(stack *top1)
{
    return top1==NULL;
}
int getMin(stack *top1)
{
    int min=pop(&top1);
    while(!isEmpty(top1))
    {
        if(min>top(top1))
            min=pop(&top1);
        else pop(&top1);
    }
    return min;
}
int main()
{
    stack *top1=NULL;
    int n1;
    scanf("%d",&n1);
    int i=0,val;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&val);
        push(&top1,val);
    }
    int min=getMin(top1);
    printf("Min is:%d",min);
}
