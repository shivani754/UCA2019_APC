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
void removeDup(struct node **head1)
{
    struct node *curr=*head1;
    while(curr&&curr->next)
    {
        if(curr->data==curr->next->data)
        {
            struct node*curr1=curr->next;
            curr->next=curr->next->next;
            free(curr1);
        }
        else
            curr=curr->next;
    }
}
int main()
{
    struct node *head=NULL;
    int n;
    printf("enter the no.elements:");
    scanf("%d",&n);
    int i=0,ele=0;
    for(i=0;i<n;i++)
     {
        scanf("%d",&ele);
         append(&head,ele );
     }
    removeDup(&head);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}

