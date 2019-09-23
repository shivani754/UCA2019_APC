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
    else return;
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
    push(&top,i);
    for(i=1;i<n1;i++)
    {
        if(A[i]>=A[peek(top)]||isEmpty(top))
            push(&top,i);
       else
       {
           while(A[i]<A[peek(top)]&&!isEmpty(top))
        {
            area=A[pop(&top)];
            if(isEmpty(top))
                area*=i;
            else
                area*=(i-peek(top)-1);
            if(max<area)
                max=area;
            if(A[i]>=A[peek(top)])
                push(&top,i);
        }
        push(&top,i);
       }
    }
    while(!isEmpty(top))
    {
        area=A[pop(&top)];
            if(isEmpty(top))
                area*=i;
            else
                area*=(i-peek(top)-1);
            if(max<area)
                max=area;
    }
    printf("max area is:%d",max);
}
/*75 54 100 72 23 20 21 22 27 11 67 66 17 61 5 16 74 77 45 86 59 5 61 32 63 97 35 71 97 57 21 16 100 22 3 5 90 21 21 95 25 14 99 91 14 84*/
/*47 69 67 97 86 34 98 16 65 95 66 69 18 1 99 56 35 9 48 72 49 47 1 72 87 52 13 23 95 55 21 92 36 88 48 39 84 16 15 65 7 58 2 21 54 2 71 92 96 100 28 31 24 10 94 5 81 80 43 35 67 33 39 81 69 12 66 87 86 11 49 94 38 44 72 44 18 97 23 11 30 72 51 61 56 41 30 71 12 44 81 43 43 27*/
