#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    public:
    int data;
    Node* left;
    Node* right;

};
struct Node* getNode(int data)
{
    struct Node* newNode=new Node;
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;

}
void preorderTraversal(Node*);
//store inorder of BST in an array 
void inorderTraversal(Node* root,vector<int>& arr)
{
    if(root==NULL) return ;
// first recur on left subtree
    inorderTraversal(root->left, arr);
 
    // then copy the data of the node
    arr.push_back(root->data);
 
    // now recur for right subtree
    inorderTraversal(root->right, arr);

}
void BSTtoMinheap(Node* root,vector<int> arr,int* i)
{
    //N->L->R
    //fillPreorder
    if(root==NULL)
    {
        return ;
    }
    root->data=arr[++*i];
    BSTtoMinheap(root->left,arr,i);
    BSTtoMinheap(root->right,arr,i);


}
void convertToMinHeapUtil(Node* root)
{
    // vector to store the data of all the
    // nodes of the BST
    vector<int> arr;
    int i = -1;
 
    // inorder traversal to populate 'arr'
    inorderTraversal(root, arr);
 
    // BST to MIN HEAP conversion
    BSTtoMinheap(root, arr, &i);
}
void preorderTraversal(Node* root)
{
    if (!root)
        return;
 
    // first print the root's data
    cout << root->data << " ";
 
    // then recur on left subtree
    preorderTraversal(root->left);
 
    // now recur on right subtree
    preorderTraversal(root->right);
}
int main()
{
    // BST formation
    struct Node* root = getNode(4);
    root->left = getNode(2);
    root->right = getNode(6);
    root->left->left = getNode(1);
    root->left->right = getNode(3);
    root->right->left = getNode(5);
    root->right->right = getNode(7);
 
    convertToMinHeapUtil(root);
    cout << "Preorder Traversal:" << endl;
    preorderTraversal(root);
 
    return 0;
}