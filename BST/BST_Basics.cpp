#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* levelorderTraversal(Node* root) //BFS
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL); //used as a separator
    
    while(!q.empty())
    {
        Node* temp=q.front();
        
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
Node* insertIntoBST(Node* &root,int d)
{
    if(root==NULL)
    {
        root=new Node(d);
        return root;
    }
    //if data to be inserted > root->data
    if(d>root->data)
    {
        root->right=insertIntoBST(root->right,d);
    }
    else
    {
        root->left=insertIntoBST(root->left ,d);
    }

}
Node* minValue(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
Node* maxValue(Node* root)
{
    Node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertIntoBST(root,data);
        cin>>data;

    }
}
/*____________________________________________
VERY IMPORTANT CODE FOR DELETION 
*/
Node* deleteFromBST(Node* root,int val)
{
    //base case
    if(root==NULL)
    {
        return root;
    }
    if(root->data==val)
    {
        //if node to be deleted has 0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //if node to be deleted has only 1 child
        //and if that child is left one
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //and if that child is right one
        if(root->left==NULL && root->right!=NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //if the node to be deleted has 2 children
        //two choices either replace that node to be deleted with the min value from RST of that node
        //or replace that node to be deleted with the max value from LST of that node
        if(root->left!=NULL && root->right!=NULL)
        {
            //lets say we go with choice number 2 
            int max=maxValue(root->left)->data;
            //replace 
            root->data=max;
            //delete the replaced node
            root->left=deleteFromBST(root->left,max);
            return root;
        }



    }
}
int main()
{
    Node* root=NULL;
    cout<<"Enter the data to create BST"<<endl;
    //50 20 70 10 30 90 110 -1
    takeInput(root);
    cout<<"Printing the BST level wise"<<endl;
    levelorderTraversal(root);
    cout<<"Minimum value "<<minValue(root)->data;

    root=deleteFromBST(root,90);
    return 0;
}
