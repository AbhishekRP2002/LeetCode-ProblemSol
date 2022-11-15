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
    int right_height(TreeNode* root)
    {
        int ctr = 0;
        
        while(root)
        {
            ctr++;
            root = root->right;
        }
        return ctr;
    }
    int left_height(TreeNode* root)
    {
        int ctr = 0;
        
        while(root)
        {
            ctr++;
            root = root->left;
        }
        return ctr;
    }
    int countNodes(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        
        int l = left_height(root);
        int r = right_height(root);
        
        if(l==r)
            return (1<<l )-1;
        else
            return 1 + countNodes(root->left) + countNodes(root->right);
    }
};