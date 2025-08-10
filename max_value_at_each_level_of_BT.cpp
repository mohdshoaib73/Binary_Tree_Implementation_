// class Solution {
//   public:
//     vector<int> largestValues(Node* root) {
//         // code here
//         vector<int>ans;
//         queue<Node*>q;
//         q.push(root);
//         Node* temp;
//         while(!q.empty())
//         {
//             int n=q.size();//size of each level of tree
//             int maxi=INT_MIN;//storing max value and then init as min value
//             for(int i=0;i<n;i++)
//             {
//                temp=q.front();
//                q.pop();
//                //updating max value
//                maxi=max(maxi,temp->data);
//                 //push left child of the node into queue if exists
//                 if(temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//                 //push right child of the node if exists
//                 if(temp->right)
//                 {
//                     q.push(temp->right);
//                 }
//             }
//             //pushing nth level maximum value int the vecotor named ans
//             ans.push_back(maxi);
//         }
//         return ans;
//     }