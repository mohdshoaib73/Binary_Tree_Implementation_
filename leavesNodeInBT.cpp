// /*leaves not define as the , a node which has zero children*/
// class Solution {
//   public:
//     // Function to count the number of leaf nodes in a binary tree.
//     void NumberOfLeaves(Node* root,int &leaves)
//     {
//         if(!root)return;
//         if(!(root->left) && !(root->right)) leaves++;
//         NumberOfLeaves(root->left,leaves);
//         NumberOfLeaves(root->right,leaves);
//     }
//     int countLeaves(Node* root) {
//         // write code here
//         int leaves=0;
//         NumberOfLeaves(root,leaves);
//         return leaves;
//     }
// };


/*SECOND METHOD*/
// class Solution {
//   public:
//     // Function to count the number of leaf nodes in a binary tree.
//     // void NumberOfLeaves(Node* root,int &leaves)
//     // {
//     //     if(!root)return;
//     //     if(!(root->left) && !(root->right)) leaves++;
//     //     NumberOfLeaves(root->left,leaves);
//     //     NumberOfLeaves(root->right,leaves);
//     // }
//     int countLeaves(Node* root) {
//         if(!root)return 0;
//         if(!(root->left) && !(root->right))return 1;
//         return countLeaves(root->left)+countLeaves(root->right);   
//     }
// };