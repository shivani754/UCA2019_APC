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
void insertAtposi(struct node **head1,int pos,int val)
{
    struct node * temp=(struct node *)malloc(sizeof(struct node));
    struct node * curr=(*head1);
    temp->data=val;
    int i=0;
    while(curr&&i<pos-1)
    {
        curr=curr->next;
        i++;
    }
    temp->next=curr->next;
    curr->next=temp;
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
    printf("enter the node where data to be inserted:");
    scanf("%d",&n);
    printf("enter data node to be inserted:");
    scanf("%d",&val);
    insertAtposi(&head,n,val);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}

