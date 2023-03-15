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
    vector<vector<int>>ans;
    vector<int>v;
       void solve(TreeNode* root , int target , int curSum)
    {
        if(root==NULL)
            return; 
        
           
          v.push_back(root->val);
           curSum += root->val;
        //for leaf nodes 
        if(root->left==NULL and root->right==NULL)
        {
            // curSum += root->val;
            if(curSum==target)
               ans.push_back(v);
            
        }
        
         solve(root->left , target , curSum );
         solve(root->right , target , curSum );
        
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        solve(root , targetSum , sum);
        return ans;
    }
};