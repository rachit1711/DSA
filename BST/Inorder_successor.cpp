Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
       
       Node* succ=NULL;
       while(root!=NULL)
       {
           if(x->data >= root->data)
           {
               root=root->right;
           }
           else
           {
               succ=root;
               root=root->left;
           }
       }
       return succ;
    }