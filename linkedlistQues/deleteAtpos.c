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
void deleteAtpos(struct node **head1,int pos)
{
    int i=0;
    struct node *curr=*head1;
    struct node *prev=NULL;
    while(curr&&i<pos)
    {
        prev=curr;
        curr=curr->next;
        i++;
    }
    prev->next=curr->next;
    free(curr);
    /*while(curr&&i<pos-1)
    {
            prev=curr->next;
            curr=curr->next->next;
        i++;
    }
    free(prev);*/
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
    printf("enter the node where data to be deleted:");
    scanf("%d",&n);
    deleteAtpos(&head,n);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}
