bool isBST(Node* root) {

  Node *curr=root;
  stack<Node*>stk;
int temp=0;
  int i=0;
  while(curr||!stk.empty())
  {
      while(curr)
      {
          stk.push(curr);
          curr=curr->left;
      }
      if(temp<stk.top()->data)
       temp=stk.top()->data;
      else return 0;
      curr=stk.top()->right;
      stk.pop();
  }
  return 1;
}
