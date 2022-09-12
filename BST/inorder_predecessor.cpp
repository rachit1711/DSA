Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
       
       Node* pred=NULL;
       while(root!=NULL)
       {
           if(x->data < root->data)
           {
               root=root->left;
           }
           else
           {
               pred=root;
               root=root->right;
           }
       }
       return pred;
    }