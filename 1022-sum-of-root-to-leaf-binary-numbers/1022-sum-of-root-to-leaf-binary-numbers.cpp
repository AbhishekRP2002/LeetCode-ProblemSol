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
    void solve(TreeNode* root , int bitVal , int &ans)
    {
        if(root==NULL)
            return;
        bitVal = bitVal*2 + root->val;
        if(root->right==NULL and root->left==NULL) // leaf node 
        {
            ans+=bitVal;
            return;
        }
        
        solve(root->right , bitVal , ans);
        solve(root->left , bitVal , ans);
    }
    int sumRootToLeaf(TreeNode* root) {
       int bitVal = 0;
        int ans = 0;
        solve(root , bitVal , ans );
        return ans;
    }
};