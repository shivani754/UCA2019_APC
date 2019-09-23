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
struct node* detectCycle(struct node* A) {
    struct node* ptr1=A,*ptr2=A;
    while(ptr2&&ptr2->next)
    {
        ptr2=ptr2->next->next;
        ptr1=ptr1->next;
        if(ptr1==ptr2)
        break;
    }
    if(ptr2==NULL||ptr2->next==NULL)
    return NULL;
    struct node * begin=ptr2;
    ptr1=A;
    while(ptr1!=begin)
    {
        ptr1=ptr1->next;
        begin=begin->next;
    }
    return ptr1;

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
  struct node * pos=detectCycle(head);
  printf("%d",*pos);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}

