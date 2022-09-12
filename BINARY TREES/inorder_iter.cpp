/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //first go to extreme left of the root node then print root node then print right of the root node
        stack<TreeNode*> st;
        TreeNode* curr=root;
        vector<int> inorder;
        while(true)
        {
            if(curr!=NULL)
            {
                st.push(curr);
                curr=curr->left;
            }
            else
            {
                //if curr is NULL and stack is empty then we are done
                if(st.empty()==true) break;
                curr=st.top();
                st.pop();
                inorder.push_back(curr->val);
                curr=curr->right;
            }
        }
        return inorder;
    }
};