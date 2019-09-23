#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct stack
{
    int data;
    struct stack *next;
}stack;
void push(stack **top,int val)
{
    stack *temp=(stack *)malloc(sizeof(stack));
    if(!temp)
    {
        printf("stack is full");
        return;
    }
    temp->data=val;
    temp->next=*top;
    (*top)=temp;
}
int pop(stack **top)
{
    stack *temp=*top;
    int t=temp->data;
    *top=temp->next;
    free(temp);
    temp=NULL;
    return t;
}
int peek(stack *top)
{
    if(!top)
    return 0;
    int t=top->data;
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
    while(n1!=0)
    {
        int A[n1];
    stack *top=NULL;
    int i=0;
    for(i=0;i<n1;i++)
        scanf("%d",&A[i]);
    i=0;int j=0;
    int G[n1];
    push(&top,A[0]);
    for(i=1;i<n1;i++)
    {

            while(A[i]>peek(top)&&!isEmpty(top))
            {
                G[j]=pop(&top);
                j++;
            }
            push(&top,A[i]);

    }
    while(!isEmpty(top))
    {
        G[j]=pop(&top);
        j++;
    }
    for(i=0;i<j-1;i++)
    {
       if(G[i]<=G[i+1])
        continue;
       else break;
    }
    if(i==(j-1))
        printf("yes\n");
    else printf("no\n");
    scanf("%d",&n1);
}
}

