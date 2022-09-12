 */
/*Aglorithm
Step 1 store the inorder of the BST
Step 2 now calculate the mid node of the  inorder arr 
mid node will be the root of balanced BST
Step 3 apply Recursion for LST and RST of the BST
*/
class Solution {
public:
    void inorder(TreeNode* root,vector<int> &in)
{
	if(root==NULL) return ;
	//LNR
	inorder(root->left,in);
	in.push_back(root->val);
	inorder(root->right,in);
	
}
    TreeNode* inorderToBST(int s,int e,vector<int> &in)
{
	if(s>e)
	{
		return NULL;
	}
	int mid=(s+e)/2;
	//create a new node and assign it as root (mid)
	TreeNode* root=new TreeNode(in[mid]);
	root->left=inorderToBST(s,mid-1,in);
	root->right=inorderToBST(mid+1,e,in);
        return root;
}
    
    TreeNode* balanceBST(TreeNode* root) {
        //step 1 
	//store inorder
	vector<int> inorderVal;
	inorder(root,inorderVal);
    return inorderToBST(0,inorderVal.size()-1,inorderVal);
    }
};