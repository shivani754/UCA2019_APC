/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 *
 * typedef struct ListNode listnode;
 *
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list
 *
 * @Output Integer
 */
/*int lPalin(listnode* A) {
    stack<int>s;
    listnode * temp=A;
    while(temp)
    {
        s.push(temp->data);
        temp=temp->next;
    }
    while(A)
    {
        int i=s.pop();
        if(A->data!=i)
        return 0;
        A=A->next;
    }
    return 1;
    /*listnode *ptr1=A,*ptr2=A;
    temp=A;int n=0;
    while(ptr2&&ptr2->next)
    {
        int i=0;
        for(i=0;i<len-n-1;i++)
        temp=temp->next;
        if(ptr1->data==temp->data);


    }
}*/
listnode *rev(listnode *head)
{
    listnode *prev=NULL,*last=NULL,*curr=head;
    if(head->next==NULL)
    return head;
    while(curr)
    {
        last=curr->next;
        curr->next=prev;
        prev=curr;
        curr=last;
    }
    return prev;
}
int lPalin(listnode *head)
{
    //Your code here
    listnode *ptr1=head,*ptr2=head,*prevPtr1=NULL;
    if(head->next==NULL)
    return 1;
    if(ptr1->next->next==NULL)
    {
        if(ptr1->val==ptr1->next->val)
        return 1;
        else return 0;
    }
    while(ptr2&&ptr2->next)
    {
        prevPtr1=ptr1;
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    if(ptr2!=NULL)
    ptr1=ptr1->next;
    listnode *head2=ptr1;
    prevPtr1->next=NULL;//fast_ptr would become NULL when there are even elements in list.
		                  //  And not NULL for odd elements. We need to skip the middle node
		                //for odd case and store it somewhere so that we can restore the
		                //original list
    head2=rev(head2);
    while(head&&head2)
    {
        // cout<<head->data<<" "<<head2->data;
        if(head->val==head2->val)
        {
            head=head->next;
            head2=head2->next;
        }
        else return 0;
    }
    //if(!head&&!head2)
    return 1;
    //else return 0;
}

