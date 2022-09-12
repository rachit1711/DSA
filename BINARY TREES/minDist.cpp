class Solution{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       //base case
       if(!root) return NULL;
       //if any of n1 or n2 matches with root then root is the LCA
       
       if(root->data==n1 or root->data==n2) return root;
       
       Node* l=lca(root->left,n1,n2);
       Node* r=lca(root->right,n1,n2);
       
       //if left and right child both are not null then surely the root of them is the LCA
       if(l and r) return root;
       //else if Left is not not null then return left
       if(l) return l;
       else return r;
       
    }
    //find distance
    
    int solve(Node* root,int val)
    {
        if(!root) return 0;
        if(root->data==val) return 1;
        int a=solve(root->left,val);
        int b=solve(root->right,val);
        //if a and b both returns null 
        if(!a and !b) return 0;
        else return a+b+1;
    }
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int findDist(Node* root, int a, int b) {
        // Your code here
        //application of LCA 
        Node* LCA=lca(root,a,b);
        int x=solve(LCA,a); //dist of LCA from a
        int y=solve(LCA,b); //dist of LCA from b
        return x+y-2; //to compensate the +1 of both and b
        
         
        
        
    }
};