#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
void append(struct node **head_ref,int val)
{
    struct node *curr=*head_ref;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(curr->next)
        curr=curr->next;
    curr->next=temp;
}
void split_join(struct node **head1)
{
    struct node * ptr1=*head1,*ptr2=*head1;
    while(ptr2&&ptr2->next)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    struct node *head2=ptr1->next;
    ptr1->next=NULL;
    struct node *prev=NULL,*last=NULL,*curr=head2;
    while(curr)
    {
        last=curr->next;
        curr->next=prev;
        prev=curr;
        curr=last;
    }
    head2=prev;
    struct node *curr2=head2;
    struct node * curr1=*head1;
    prev=NULL;
    while(curr2)
    {
        struct node*temp=(struct node *)malloc(sizeof(struct node));
        temp->data=curr2->data;
        temp->next=curr1->next;
        curr1->next=temp;
        curr2=curr2->next;
        if(curr2)
        curr1=curr1->next->next;

    }
}
int main()
{
    struct node *head=NULL,*head2=NULL;
    int n;
    printf("enter the no.elements:");
    scanf("%d",&n);
    int i=0,ele=0;
    for(i=0;i<n;i++)
     {
        scanf("%d",&ele);
         append(&head,ele );
     }
    split_join(&head);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}


