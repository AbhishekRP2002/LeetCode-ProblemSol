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
    
    int maxProduct(TreeNode* root) {
        long long int sum = total_sum(root); 
        long long int ans = INT_MIN;
        Util(root , sum , ans);
        return ans%1000000007;
    }
    
    long long int Util(TreeNode* root , long long int sum ,long long  int& ans)
    {
        if(root==NULL)
            return 0;
        long long int subtree_sum = 0;
        subtree_sum += Util(root->left , sum , ans);
        subtree_sum += Util(root->right , sum  , ans);
        subtree_sum += root->val;
        if((subtree_sum * (sum - subtree_sum) ) > ans)
            ans = subtree_sum * (sum - subtree_sum);
        
        return subtree_sum;
    }
    
    long long int total_sum(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        long long int l = total_sum(root->left);
        long long int r = total_sum(root->right);
        return (l+r+ root->val);
    }
};