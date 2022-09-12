 TreeNode* solve(vector<int>& preorder,int mini,int maxi,int &i)
    {
        //BASE CASES
        if(i>=preorder.size())
        {
            //cout<<i<<endl;
            return NULL;
        }
        if(preorder[i]<mini || preorder[i]>maxi)
        {
           // cout<<"Here"<<i<<endl;
            return NULL;
        }
        cout<<i<<endl;
        //else if the value of preorder element lies in the specified range, then we have to create a new node for it
	TreeNode* root=new TreeNode(preorder[i]);
        i+=1;
	root->left=solve(preorder,mini,root->val,i);
	root->right=solve(preorder,root->val,maxi,i);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        int mini=INT_MIN;
        int maxi=INT_MAX;
        return solve(preorder,mini,maxi,i);
    }