/*Balance binary tree is define as the absolute diffrence between left subtree height and right subtree height at most 1 for each node*/
/*

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
  public:
  bool valid=1;
    int HeightOfBT(Node* root)
    {
        if(!root)return 0;
        int L=HeightOfBT(root->left);
        int R=HeightOfBT(root->right);
        if(abs(L-R)>1)
        {
            valid=0;
        }
        return (1+max(L,R));
    }
    bool isBalanced(Node* root) {
        // Code here
        
        HeightOfBT(root);
        return valid;
    }
};