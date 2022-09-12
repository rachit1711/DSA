#include<iostream>
#include<climits>
using namespace std;
struct Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
struct Info
{
    //5 parameters for every node
    int size;
    int max;
    int min;
    int ans;
    bool isBST;

};
Info largestBSTinBT(Node* root)
{
    //BASE CASES
    if(root==NULL)
    {
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left ==NULL && root->right==NULL)
    {
        //root is leaf 
        return {1,root->data,root->data,1,true};
    }

    
    Info leftInfo=largestBSTinBT(root->left);
    Info rightInfo=largestBSTinBT(root->right);
    Info curr;
    curr.size=(1+leftInfo.size+rightInfo.size);

    //check for conditions
    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max<root->data && rightInfo.min>root->data)
    {
        //update details for curr node also
        curr.min=min(leftInfo.min,min(leftInfo.min,root->data));
        curr.max=max(rightInfo.max,max(rightInfo.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    //if BST is not formed at curr
    curr.ans=max(leftInfo.ans,rightInfo.ans);
    curr.isBST=false;
    return curr;
}
int main()
{
    Node* root=new Node(15);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(5);
    cout<<"Size of Largest BST in BT is : "<<largestBSTinBT(root).ans<<endl;
}