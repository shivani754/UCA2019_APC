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
struct node *split(struct node **head1)
{
    struct node * ptr1=*head1,*ptr2=*head1;
    while(ptr2&&ptr2->next)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    struct node *head2=ptr1->next;
    ptr1->next=NULL;
    return head2;
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
    head2=split(&head);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
     while(head2!=NULL)
    {
        printf("%d ",head2->data);
        head2=head2->next;
    }
    return 0;
}

