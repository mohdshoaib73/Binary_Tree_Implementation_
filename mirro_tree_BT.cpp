// /*
// class Node {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int x) {
//         data = x;
//         left = right = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     void mirror(Node* node) {
//         // code here
//         queue<Node*>q;
//         q.push(node);
//         Node *temp,*temp1,*temp2;
//         while(!q.empty()){
//             int n=q.size();
//             for(int i=0;i<n;i++)
//             {
//                 temp1=temp2=NULL;
//                 Node* temp=q.front();
//                 q.pop();
//                 if(temp->left)
//                 {
//                     temp1=temp->left;
//                 }
//                 if(temp->right)
//                 {
//                      temp2=temp->right;
//                 }
//                 temp->left=temp2;
//                 temp->right=temp1;
//                 if(temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//                 if(temp->right)
//                 {
//                     q.push(temp->right);
//                 }
//             }
//         }
//     }
// };