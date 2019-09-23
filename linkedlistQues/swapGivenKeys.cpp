#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void swapNodes(struct Node**head,int key1,int key2)
{
    if(key1==key2)
        return;
    struct Node*prevX=NULL,*currX=*head,*prevY=NULL,*currY=*head;
    while(currX&&currX->data!=key1)
    {
        prevX=currX;
        currX=currX->next;
    }
     while(currY&&currY->data!=key2)
    {
        prevY=currY;
        currY=currY->next;
    }
    if(!currX||!currY)return;
    if(prevX)
        prevX->next=currY;
    else *head=currY;
    if(prevY)
        prevY->next=currX;
    else *head=currX;
    struct Node *temp=currY->next;
    currY->next=currX->next;
    currX->next=temp;
   /* struct Node*dummy=(struct Node*)malloc(sizeof(struct Node));
    dummy->next=*head;
    struct Node *ptr=dummy,*loc1=NULL,*loc2=NULL;
    while(ptr->next)
    {
        if(ptr->next->data==key1)
            loc1=ptr;
        if(ptr->next->data==key2)
            loc2=ptr;
        ptr=ptr->next;
    }
   /* struct Node*temp1=(struct Node*)malloc(sizeof(struct Node));
    struct Node*temp2=(struct Node*)malloc(sizeof(struct Node));
    struct Node*temp3=loc2->next->next;
    struct Node*temp4=loc2->next;
    temp1->data=loc1->next->data;
    temp2->data=loc2->next->data;
    temp2->next=loc1->next->next;
    loc1->next=temp2;
    temp1=temp3;
    temp4=temp1;
   struct Node*temp=loc1->next;
    struct Node*temp3=loc1->next->next;
    struct Node*temp2=loc2->next;
    struct Node*temp4=loc2->next->next;
    loc1->next=loc2->next;
    loc1->next->next=temp3;
    loc2->next=temp;
    loc2->next->next=temp4;
    *head=dummy->next;*/
}
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void printList(struct Node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main()
{
    struct Node *start = NULL;
    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);
  int key1,key2;
    printf("\n Linked list before calling swapNodes():\n");
    printList(start);
    cout<<"\nEnter the keys:";
    cin>>key1>>key2;
    swapNodes(&start, key1,key2);
    cout<<"Linked list after calling swapNodes():\n";
    printList(start);

    return 0;
}
