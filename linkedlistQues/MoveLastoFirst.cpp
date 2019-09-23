#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void lastTofirst(struct Node**head)
{
    struct Node*curr=*head,*prev=NULL;
    while(curr->next)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    curr->next=(*head);
    *head=curr;

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
    printf("\n Linked list before:\n");
    printList(start);
    lastTofirst(&start);
    cout<<"Linked list after:\n";
    printList(start);

    return 0;
}

