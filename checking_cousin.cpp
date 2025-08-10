/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
/*.......................method1......................*/
class Solution {
  public:
    // Function to check if two nodes are cousins in a tree
   bool isCousins(Node* root, int x, int y) {
       if(x==y)return 0;
        queue<Node*>q;
        Node* temp;
        int level=0;
        int l1=-1,l2=-1;
        q.push(root);
        
        // checking both x and y level
        while(!q.empty())
        {
            int n=q.size();//size of each level
            for(int i=0;i<n;i++)
            {
                temp=q.front();
                q.pop();
                if(temp->data==x)
                {
                   l1= level;
                }
                if(temp->data==y)
                {
                   l2= level;
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            if(l1!=l2)return 0;
            level++;
        }
        if(l1==-1 || l2==-1)return 0;
        if(l1!=l2)return 0;
         // finding both parent
        queue<Node*>q1;
        q1.push(root);
        
        while(!q1.empty())
        {
            int n=q1.size();//size of each level
            for(int i=0;i<n;i++)
            {
                temp=q1.front();
                q1.pop();
                if(temp->left && temp->right)
                {
                    Node* temp1=temp->left;
                    Node* temp2=temp->right;
                    if((temp1->data==x && temp2->data==y) || (temp1->data==y && temp2->data==x))
                    {
                        return 0;
                    }
                }
                if(temp->left)
                {
                    q1.push(temp->left);
                }
                if(temp->right)
                {
                    q1.push(temp->right);
                }
            }
        }
        return 1;
    }
};
/*.......................method2......................*/
class Solution {
  public:
    // Function to check if two nodes are cousins in a tree
   bool isCousins(Node* root, int x, int y) {
       if(x==y)return 0;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        bool levelX = false, levelY = false;

        for (int i = 0; i < n; i++) {
            Node* temp = q.front();
            q.pop();

            if (temp->data == x) levelX = true;
            if (temp->data == y) levelY = true;

            // Check if x and y are siblings
            if (temp->left && temp->right) {
                if ((temp->left->data == x && temp->right->data == y) ||
                    (temp->left->data == y && temp->right->data == x))
                    return false;
            }

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }

        // If both found in same level
        if (levelX && levelY) return true;

        // If only one found in this level
        if (levelX || levelY) return false;
    }
    return false;
    }
};