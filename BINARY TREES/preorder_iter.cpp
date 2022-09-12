// Root->left->right
#include<iostream>
#include<stack>
using namespace std;
//iterative using stacks 
/*
1) Create an empty stack nodeStack and push root node to stack. 
2) Do the following while nodeStack is not empty. 
….a) Pop an item from the stack and print it. 
….b) Push right child of a popped item to stack 
….c) Push left child of a popped item to stack
The right child is pushed before the left child to make sure that the left subtree is processed first.
*/
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorderIter(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    stack<Node*> stack;
    stack.push(root);
   // loop till stack is empty
    while (!stack.empty())
    {
        // pop a node from the stack and print it
        Node* curr = stack.top();
        stack.pop();
 
        cout << curr->data << " ";
 
        // push the right child of the popped node into the stack
        if (curr->right) {
            stack.push(curr->right);
        }
 
        // push the left child of the popped node into the stack
        if (curr->left) {
            stack.push(curr->left);
        }
 
        // the right child must be pushed first so that the left child
        // is processed first (LIFO order)
    }
}
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    preorderIter(root);
 
    return 0;
}
