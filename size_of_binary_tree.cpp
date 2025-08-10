/*.....................First Method........................... */
// class Solution {
//   public:
//     void SizeOfTree(Node* node,int& count)
//     {
//         if(!node)
//         {
//             return;
//         }
//         count++;
//         SizeOfTree(node->left,count);
//         SizeOfTree(node->right,count);
//     }
//     int getSize(Node* node) {
//         int count=0;
//         SizeOfTree(node,count);
//         return count;
//     }
// };



// /*.....................Second Method........................... */
// class Solution {
//   public:
//     int SizeOfTree(Node* node)
//     {
//         if(!node)return 0;
//      return (1+ SizeOfTree(node->left)+SizeOfTree(node->right));
        
//     }
//     int getSize(Node* node) {
//       return  SizeOfTree(node);
//     }
// };