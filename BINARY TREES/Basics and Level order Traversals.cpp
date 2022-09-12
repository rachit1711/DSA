#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node* root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1)
    {
        return NULL;

    }
    cout<<"Enter data for  inserting in left"<<endl;
    
    root->left=buildTree(root->left);
    cout<<"Enter data for  inserting in right"<<endl;
    root->right=buildTree(root->right);
    
}
node* levelorderTraversal(node* root) //BFS
{
    queue<node*> q;
    q.push(root);
    q.push(NULL); //used as a separator
    
    while(!q.empty())
    {
        node* temp=q.front();
        
        q.pop();
        if(temp==NULL)
        {
            //it means prev level is traversed completely
            cout<<endl;
            if(!q.empty()) //queue still has some child nodes
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);

            }
        }

        
    }
}
int main()
{
       node* root=NULL;
       root=buildTree(root);
    cout<<"Level order traversal "<<endl;
       levelorderTraversal(root); 
}