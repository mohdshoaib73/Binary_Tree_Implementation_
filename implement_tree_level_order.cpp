#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
      public:
      int data;
      Node* left;
      Node* right;
      Node(int val) :data(val),left(NULL), right(NULL) {}
};
int main()
{
    queue<Node*>q;//queue to hold nodes for level order input
    int x;
    cout << "Enter the root node value: ";
    cin >> x;
    Node* root = new Node(x);
    q.push(root);
    while(!q.empty())
    {
        Node* temp= q.front();
        q.pop();
        cout << "Enter left child of " << temp->data << " (-1 for no child): ";
        cin >> x;   
        if(x!=-1){
            temp->left=new Node(x);
            q.push(temp->left);
        } 
        cout << "Enter right child of " << temp->data << " (-1 for no child): ";
        cin >> x;   
        if (x!=-1){
           temp->right=new Node(x);
           q.push(temp->right);
        }
    }
}