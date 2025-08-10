/*..............function of level order traverse in spiral form........................*/
/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
class Solution {
  public:
    vector<int> findSpiral(Node* root) {
         vector<int>result;
         stack<Node*>s1;//for right to left;
         stack<Node*>s2;//for left to right 
         //push root in s1 as rTol
         s1.push(root);
          Node* temp;
         while(!s1.empty() || !s2.empty())
         {
             while(!s1.empty())// traversing right to left 
             {
                 temp=s1.top();
                 s1.pop();
                 result.push_back(temp->data);
                 if(temp->right)
                 {
                     s2.push(temp->right);
                 }
                 if(temp->left)
                 {
                     s2.push(temp->left);
                 }
             }
             while(!s2.empty())// traversing left to right
             {
                 temp=s2.top();
                 s2.pop();
                 result.push_back(temp->data);
                 if(temp->left)
                 {
                     s1.push(temp->left);
                 }
                 if(temp->right)
                 {
                     s1.push(temp->right);
                 }
             }     
         }
         return result;
     }
};