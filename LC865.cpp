/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth=0;
    unordered_map<int,int>mp;
    TreeNode* solveUsingLCA(TreeNode* root)
    {
        if(!root || mp[root->val]==maxDepth)return root;

        TreeNode* l=solveUsingLCA(root->left);
        TreeNode* r=solveUsingLCA(root->right);

        if(l && r)return root;
        return l!=NULL ?l:r;
    }
    void depth(TreeNode* root,int d)
    {
        if(!root)return;
        maxDepth=max(maxDepth,d);
        mp[root->val]=d;
        depth(root->left,d+1);
        depth(root->right,d+1);
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        depth(root,0);

        return solveUsingLCA(root);
    }
};