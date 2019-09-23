#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
/*void reverse(struct node **head1)
{
     struct node * prev=NULL;
      struct node * last=NULL;
    struct node * curr=(*head1);
    if(curr)last=curr->next;
    while(curr)
    {
        curr->next=prev;
        prev=curr;
        curr=last;
        if(curr)last=curr->next;
    }
    *head1=prev;
}*/
struct node *reverse(struct node *curr,struct node *prev)
{
    if(curr==NULL)
        return prev;
    struct node* last=curr->next;
    curr->next=prev;
    return reverse(last,curr);

};
void push(struct node **head_ref,int val)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=(*head_ref);
    (*head_ref)=temp;
}
int main()
{
    struct node *head=NULL;
    int n,val;
     push(&head, 1);
    push(&head, 8);
    push(&head, 3);
     push(&head, 12);
    push(&head, 17);
    /*reverse(&head);*/
    head=reverse(head,NULL);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}

