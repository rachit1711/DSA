class Solution {
public:
  int helper(TreeNode* curr,int value,int& parent,int height){
      if(curr==NULL)
            return 0;
      if(curr->val==value)
          return height;
      
      parent=curr->val;
      int left=helper(curr->left,value,parent,height+1);
      if(left) return left;
      
      parent=curr->val;
      int right=helper(curr->right,value,parent,height+1);
      return right;
      
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int xparent=-1,yparent=-1,xheight=0,yheight=0;
        xheight= helper(root,x,xparent,xheight);
        yheight= helper(root,y,yparent,yheight);
        if(xheight==yheight && xparent!=yparent) return true;
        return false;
    }
};