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
    int minm = INT_MAX, temp = -1;
    int minDiffInBST(TreeNode* root) {
        if(root->left)
            minDiffInBST(root->left);
        if(temp >= 0)
            minm = min(minm , abs(root->val - temp));
        temp = root->val;
        if(root->right)
            minDiffInBST(root->right);
        return minm;
    }
};