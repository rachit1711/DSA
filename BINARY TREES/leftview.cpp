vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   if(!root) return v;
   queue<Node*> q;
   q.push(root);
   while(!q.empty())
   {
       //iterate over the tree level order wise and at each level return the firstmost element
       int sz=q.size();
       v.push_back(q.front()->data); //return the firstmost element 
       while(sz--)
       {
           //for each level 
           Node* t=q.front();//return the firstmost element for each level 
           q.pop();
           if(t->left) q.push(t->left);
           if(t->right) q.push(t->right);
           
       }
   }
   return v;
}

/*
recursive
void solve(Node* root,vector<int> &ans,int level)
{
    //base case
    if(root == NULL)
        return ;
       
    //we entered into a new level    
    if(level == ans.size())
        ans.push_back(root->data);
        
    solve(root->left, ans, level+1);
    solve(root->right, ans, level+1);
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root, ans, 0);
   return ans;
}

*/