class Solution {
  public:
  int countNodes(struct Node* root)
  {
      //base 
      if(root==NULL)
      {
          return 0;
      }
      int ans= 1+countNodes(root->left)+countNodes(root->right);
      return ans;
  }
  bool isCBT(struct Node* root,int index,int count)
  {
      //base cases
      if(root==NULL)
      {
          return true;
      }
      if(index>=count)
      {
          return false;
      }
      else
      {
          bool left= isCBT(root->left,2*index+1,count);
          bool right=isCBT(root->right,2*index+2,count);
          return (left&&right);
      }
  }
  bool ismaxOrder(struct Node* root)
  {
      //case 1 ; leaf node
      if(root->left==NULL && root->right==NULL)
      {
          return true;
      }
      //case 2: if only left exist
      
      if(root->right==NULL)
      {
          return (root->data > root->left->data);
      }
      //case 3 : if both are non null
      else
      {
          bool left=ismaxOrder(root->left);
          bool right=ismaxOrder(root->right);
          return (left && right && (root->data>root->left->data && root->data > root->right->data));
      }
  }
    bool isHeap(struct Node* tree) {
        int index=0;
        int nodeCount=countNodes(tree);
        // code here
        if(isCBT(tree,index,nodeCount) && ismaxOrder(tree))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}