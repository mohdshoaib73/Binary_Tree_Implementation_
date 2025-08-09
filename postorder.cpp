#include<iostream>
using namespace std;
class Node {
public: 
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};
Node* BinaryTree(){
    int x;
    cout << "Enter the value:";
    cin >> x;
    if (x == -1) {
        return NULL; // Base case for no node
    }
    Node* root = new Node(x);// Create a new node with the input value
    cout << "Creating left child of " << x << endl;
    root->left = BinaryTree(); // Recursive call for left subtree
    cout << "Creating right child of " << x << endl;
    root->right = BinaryTree(); // Recursive call for right subtree 
    return root; // Return the created node
}
void postorder(Node*root)
{
    if(!root) return; // Base case for empty node
    postorder(root->left); // Traverse the left subtree  
    postorder(root->right); // Traverse the right subtree
    cout<< root->data << " "; // Visit the root node
}
int main() {
    Node* root = BinaryTree(); // Create the binary tree
    cout << "Preorder traversal of the binary tree: ";
    postorder(root); // Call the preorder function to display the tree
    return 0;
}