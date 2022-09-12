void inorder(TreeNode<int>* root,vector<int> &in)
{
	if(root==NULL) return;
	inorder(root->left,in);
	in.push_back(root->data);
	inorder(root->right,in);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
	vector<int> inorderVal;
	//step 1 - store inorder 
	inorder(root,inorderVal);
	int n=inorderVal.size();
	//creating a new root node
	TreeNode<int>* newRoot=new TreeNode<int>(inorderVal[0]);
	TreeNode<int>* curr=newRoot;
	
	//step 2 - from first element to second last element make left ptr as NULL and right ptr point to next node
	for(int i=1;i<n;i++)
	{
		TreeNode<int> *temp=new TreeNode<int>(inorderVal[i]);
		curr->left=NULL;
		curr->right=temp;
		curr=temp; //incr temp
	}
	//step - 3 for last node make left and right pointer point to NULL
	curr->left=NULL;
	curr->right=NULL;
	return newRoot;
	
}