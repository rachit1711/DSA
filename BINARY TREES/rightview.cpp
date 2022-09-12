/*************************************************************
 
    Following is the Binary Tree node structure:

    template <typename T>

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> printRightView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> v;
    if(!root) return v;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        BinaryTreeNode<int>* t;
        while(size--)
        {
            t=q.front();
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
         v.push_back(t->data); //last node for each level
    }
    return v;
}

/*
 //recusrive soln
    void solve(TreeNode* root,vector<int> &ans,int level)
{
    //base case
    if(root == NULL)
        return ;
       
    //we entered into a new level    
    if(level == ans.size())
        ans.push_back(root->val);
         solve(root->right, ans, level+1);
    solve(root->left, ans, level+1);
   
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
   solve(root, ans, 0);
   return ans;
    }
*/