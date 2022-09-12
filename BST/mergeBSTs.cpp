   void inorder(TreeNode<int>* root,vector<int> &in)
{
	if(root==NULL) return ;
	//LNR
	inorder(root->left,in);
	in.push_back(root->data);
	inorder(root->right,in);
	
}
TreeNode<int>* inorderToBST(int s,int e,vector<int> &in)
{
	if(s>e)
	{
		return NULL;
	}
	int mid=(s+e)/2;
	//create a new node and assign it as root (mid)
	TreeNode<int>* root=new TreeNode<int>(in[mid]);
	root->left=inorderToBST(s,mid-1,in);
	root->right=inorderToBST(mid+1,e,in);
        return root;
}
    
vector<int> mergeArrays(vector<int> a,vector<int> b)
{
	vector<int> ans(a.size()+b.size());
	int i=0;
	int j=0;
	int k=0; //for new merged array
	while(i<a.size() && j<b.size()){
		if(a[i]<b[j])
		{
			ans[k++]=a[i];
			i++;
		}
		else
		{
			ans[k++]=b[j];
			j++;
		}
	}
	while(i<a.size())
	{
		ans[k++]=a[i];
		i++;
	}
	while(j<b.size())
	{
		ans[k++]=b[j];
		j++;
	}
	return ans;
}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.
	//step 1 : store inorders
	vector<int> bst1,bst2;
	inorder(root1,bst1);
	inorder(root2,bst2);
	
	//step2 merge two sorted vectors
	vector<int> mergeArray=mergeArrays(bst1,bst2);
	
	//step 3 - inorderToBST 
	int s=0;
	int e=mergeArray.size()-1;
	return inorderToBST(s,e,mergeArray);
}