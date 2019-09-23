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
void popTail(stack **top)
{
    stack* temp=*top,*prev=NULL;
    if(temp->next==NULL)
    {
        *top=NULL;
        return;
    }
    while(temp->next)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}
void popHead(stack **top)
{
    if(*top==NULL)return;
    stack *temp=*top;
    *top=temp->next;
    free(temp);
}
int head(stack *top)
{
    int t;
    if(!isEmpty(top))
    t=top->data;
    else return;
    return t;
}
int tail(stack *top)
{
    stack* temp=top;
    while(temp->next)
        temp=temp->next;
    int n=temp->data;
    return n;
}
int isEmpty(stack *top)
{
    return top==NULL;
}
int main()
{
    int n1,k;
    scanf("%d",&n1);
    int A[n1];
    stack *top=NULL;
    int i=0;
    for(i=0;i<n1;i++)
        scanf("%d",&A[i]);
    i=0;int j=0,count=0;
    int out[n1];
    printf("enter the size of window:");
    scanf("%d",&k);
    for(i=0;i<n1;i++)
    {
        if(count>=k)
            {
                popTail(&top);
                count--;
            }
        if(count!=0&&(i-tail(top))>=k)
            {
                popTail(&top);
                count--;
            }
         if(isEmpty(top)||A[i]<A[head(top)])
        {
            push(&top,i);
            count++;
        }
        else
        {
            while(!isEmpty(top)&&A[i]>A[head(top)])
                {
                    popHead(&top);
                    count--;
                }
            push(&top,i);
            count++;
        }
        if(i>=(k-1))
            out[j++]=A[tail(top)];
    }
    for(i=0;i<j;i++)
        printf("%d ",out[i]);
}
/*648 614 490 138 657 544 745 582 738 229 775 665 876 448 4 81 807 578 712 951 867 328 308 440 542 178 637 446 882 760 354 523 935 277 158 698 536 165 892 327 574 516 36 705 900 482 558 937 207 368*/
