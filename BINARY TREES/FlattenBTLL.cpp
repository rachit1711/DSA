//recursive 
void flatten(Node *root)
    {
        //code here
        //base case
        if(root==NULL || (root->left==NULL && root->right==NULL))
        {
            return;
        }
        //recursively flatten the LST and Rst
        if(root->left!=NULL)
        {
            flatten(root->left);
        
            Node* temp=root->right;
            root->right=root->left;
            root->left=NULL;

            Node* t=root->right;
            while(t->right!=NULL)
            {
                t=t->right;


            }
            t->right=temp;//append
        }
        flatten(root->right);
    }
};

//morris
void flatten(Node *root)
    {
        //code here
        //using morris traversal 
        Node* curr=root;
        while(curr!=NULL)
        {
            if(curr->left)
            {
                Node* pred=curr->left;
                //get inorder pred 
                //rightmos in the lst
                while(pred->right)
                {
                    pred=pred->right;
                }
                //create virtual link 
                pred->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
                
            }
            curr=curr->right;
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
	cin >> t;
	getchar();

	while (t--)
	{

		string str;
		getline(cin, str);
	
		Node *root = buildTree(str);
		Solution ob;
		ob.flatten(root);
		inorder(root);


		cout << "\n";
	}

	return 0;
}
