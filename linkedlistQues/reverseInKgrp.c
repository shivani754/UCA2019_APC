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
struct node *revInK(struct node *head1,int k)
{
     struct node *curr=head1;
     struct node *prev=NULL,*last=NULL;
     int i=0;

     while(curr&&i<k)
     {
         last=curr->next;
       curr->next=prev;
       prev=curr;
       curr=last;
       i++;
     }
     if(last!=NULL)
     head1->next=revInK(last,k);
     return prev;

}
int main()
{
    struct node *head=NULL;
    int k;
     push(&head, 1);
    push(&head, 4);
    push(&head, 5);
    push(&head, 12);
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);
    printf("enter the group size:");
    scanf("%d",&k);
    struct node *head1=head;
    printf("LinkedLIst before:\n");
    while(head1!=NULL)
    {
        printf("%d ",head1->data);
        head1=head1->next;
    }
   head=revInK(head,k);
   printf("\nLinkedList after:\n");
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}
