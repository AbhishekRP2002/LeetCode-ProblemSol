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
    bool util(TreeNode* root , int val)
    {
        if(root==NULL)
            return root;
        
        if(val==2)
            return util(root->right , root->right->val) | util(root->left , root->left->val);
        else if(val == 3)
            return util(root->right , root->right->val) & util(root->left , root->left->val);
        else
            return val;
    }
    bool evaluateTree(TreeNode* root) {
        // Leaf nodes  - 1 /0
        // Non Leaf nodes - 2 -> OR , 3 ->AND
        int x = root->val;
       return util(root , x);
        
        
    }
};