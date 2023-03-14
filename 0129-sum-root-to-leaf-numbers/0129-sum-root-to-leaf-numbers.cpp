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
    int sum = 0;
    void func(TreeNode* root, int curSum )
    {
        
         curSum = curSum*10 + root->val;
        
        if(root->left == NULL and root->right == NULL)
        {
            sum+=curSum;
          
        }
        
        
      
        
        if(root->left)
            func(root->left , curSum);
        if(root->right)
            func(root->right , curSum);
        
        
    }
    int sumNumbers(TreeNode* root) {
        vector<int>arr;
        int curSum = 0;
        func(root, 0);
        
        return sum;
    }
};