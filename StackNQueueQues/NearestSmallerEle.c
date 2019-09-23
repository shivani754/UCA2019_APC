#include<stdio.h>
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
    else return 0;
    return t;
}
int isEmpty(stack *top)
{
    return top==NULL;
}
int main()
{
    int n1;
    scanf("%d",&n1);
    int A[n1];
    stack *top=NULL;
    int i=0,max=0,area=0;
    for(i=0;i<n1;i++)
        scanf("%d",&A[i]);
    i=0;
    int G[n1];
    G[0]=-1;
    push(&top,i);
    for(i=1;i<n1;i++)
    {
        if(A[i]>A[peek(top)]||isEmpty(top))
        {
            G[i]=A[peek(top)];
            push(&top,i);
        }
        else
        {
            while(A[i]<=A[peek(top)]&&!isEmpty(top))
                pop(&top);
            if(isEmpty(top))
                G[i]=-1;
           else G[i]=A[peek(top)];
            push(&top,i);
        }
    }
    for(i=0;i<n1;i++)
        printf("%d ",G[i]);
}
