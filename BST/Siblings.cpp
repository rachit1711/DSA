// C++ program to check if two nodes are
// siblings

#include <bits/stdc++.h.h>
using namespace std;

// Binary Tree Node
struct Node {
	int data;
	Node *left, *right;
};

// Utility function to create a new node
struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;

	return (node);
}

// Function to find out if two nodes are siblings
bool CheckIfNodesAreSiblings(Node* root, int data_one,
							int data_two)
{
	if (!root)
		return false;

	// Compare the two given nodes with
	// the childrens of current node
	if (root->left && root->right) {
		int left = root->left->data;
		int right = root->right->data;

		if (left == data_one && right == data_two)
			return true;
		else if (left == data_two && right == data_one)
			return true;
	}

	// Check for left subtree
	if (root->left)
		if(CheckIfNodesAreSiblings(root->left, data_one,
								data_two))
		return true;

	// Check for right subtree
	if (root->right)
		if(CheckIfNodesAreSiblings(root->right, data_one,
								data_two))
		return true;
}

// Driver code
int main()
{

	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->right->left = newNode(5);
	root->right->right = newNode(6);
	root->left->left->right = newNode(7);

	int data_one = 5;
	int data_two = 6;

	if (CheckIfNodesAreSiblings(root, data_one, data_two))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
