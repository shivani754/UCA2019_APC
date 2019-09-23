#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void push(struct node **head_ref,int val)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=(*head_ref);
    (*head_ref)=temp;
}
int GetNth(struct node *head,int n)
{
    /*int count=0;
    while(head!=NULL)
        {
            if(count==n)
             return head->data;
            head=head->next;
            count++;
        }
    return;*/
    if(n==0)return head->data;
    /*int count=1;
    if(count==n)
        return head->data;*/
    return GetNth(head->next,n-1);
}
int main()
{
    struct node *head=NULL;
    int n;
     push(&head, 1);
    push(&head, 4);
    push(&head, 5);
    push(&head, 12);
    push(&head, 6);
    printf("enter the node:");
    scanf("%d",&n);
    printf("element at %d is %d",n,GetNth(head, n));
    return 0;
}
