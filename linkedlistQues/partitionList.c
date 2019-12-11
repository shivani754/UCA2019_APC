
listnode* partition(listnode* A, int B) {

    listnode* dummy=(listnode *)malloc(sizeof(listnode));
    dummy->next=A;
    int len=0;
    listnode *curr=dummy,*curr1=A,*temp;
      while(curr1)
       {
           curr1=curr1->next;
           len++;
       }
       if(len==1)return A;
       curr1=A;
    //  printf("--%d--",curr1->val);
    while(curr&&curr->next&&(len--))
    {
        temp=(listnode *)malloc(sizeof(listnode));
        if(curr->next->val>=B)
        {
           //printf("--%d--",curr->next->val);
            temp->val=curr->next->val;
            curr->next=curr->next->next;
            while(curr1->next)
              curr1=curr1->next;
          // printf("**%d**\n",curr1->val);
            temp->next=NULL;
            curr1->next=temp;
            curr1=curr1->next;
        }
        else curr=curr->next;
    }
    return dummy->next;
}
