#include<iostream>
#include<queue>
#include<vector>
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
int main() {
    Node* root = BinaryTree(); // Create the binary tree
    cout << "level order traversal of the binary tree: ";
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
    for(int i : ans) {
        cout << i << " ";
    }
    return 0;
} 