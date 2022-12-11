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
    int ans = INT_MIN;
    int Util(TreeNode* root)
    {
        if(!root)
            return 0;
        int l = max( Util(root->left) , 0);
        int r = max(Util(root->right ) , 0);
         ans = max(ans , root->val + l + r);
        return max(l , r) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        Util(root);
        return ans;
    }
};