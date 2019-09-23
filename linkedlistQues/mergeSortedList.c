listnode* mergeTwoLists(listnode* A, listnode* B) {
    listnode*dummy=(listnode *)malloc(sizeof(listnode));
    dummy->next=A;
    listnode *ptrA=dummy,*ptrB=B;
    while(ptrA->next&&ptrB)
    {
        listnode *temp=(listnode *)malloc(sizeof(listnode));
        temp->val=ptrB->val;
        if(ptrA->next->val>ptrB->val)
        {
            temp->next=ptrA->next;
            ptrA->next=temp;
             ptrB=ptrB->next;
            ptrA=ptrA->next;
        }
        else
        {
            ptrA=ptrA->next;
           // temp->next=ptrA->next->next;
           // ptrA->next->next=temp;
        }

    }
    if(!ptrA->next)
        ptrA->next=ptrB;
    return dummy->next;
}

