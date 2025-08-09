 vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>>ans;
        vector<int>tem;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node*temp=q.front();
                q.pop();
                tem.push_back(temp->data);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            ans.push_back(tem);
            tem.clear();
        }
        return ans;
    }