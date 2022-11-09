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
    int ans = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        // App 1  : inorder traversal karke vector se check and find the sum 
        // App 2 : Traverse the Tree and check thecondition
        if(root==NULL)
            return 0;
        
        int l = rangeSumBST(root->left , low , high);
        int r = rangeSumBST(root->right , low , high);
        if(root->val <= high and root->val >=low)
            ans+= root->val;
        return ans;
    }
};