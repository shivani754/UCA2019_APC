#include<stdio.h>
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
struct node * swapAdj(struct node *curr)
{
    struct node *first=curr,*sec=NULL;
    if(curr)sec=curr->next;
    if(first==NULL||sec==NULL)
        return first;
    sec->next=swapAdj(sec->next);
    first->next=sec->next;
    sec->next=first;
    return sec;
   /* struct node *curr=*head1;
     struct node *temp=(struct node *)malloc(sizeof(struct node));
     struct node *temp1=(struct node *)malloc(sizeof(struct node));
     temp=curr;
       temp1=curr->next;
       *head1=temp1;
    while(curr||curr->next)
    {
        temp1=temp;
        temp=curr->next;
        curr=curr->next->next;
    }*/
}
int main()
{
    struct node *head=NULL;
    int n,val;
     push(&head, 1);
    push(&head, 4);
    push(&head, 5);
    push(&head, 12);
    push(&head, 6);
   head=swapAdj(head);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}
