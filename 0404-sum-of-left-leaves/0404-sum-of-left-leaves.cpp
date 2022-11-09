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
//     void inOrder(int& sum , TreeNode* root)
//     {
//         if(root==NULL)
//             return ;
        
       
        
//         inOrder(sum , root->left);
//         if(root->left==NULL and root->right == NULL)
//         {
//             sum += root->val;
//             cout<<"Updated sum :"<<sum<<"\n";
//         }
//         inOrder(sum , root->right);
        
//     }
    int dfs(TreeNode* root , bool isLeft)
    {
        if(root==NULL)
            return 0;
        
        if(root->left ==NULL and root->right == NULL)
            return isLeft ? root->val : 0;
        
        return dfs(root->left , true) + dfs(root->right , false) ;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
       
//         if(root==NULL)
//             return 0;
        
//         int sum = 0;
        
        
//         inOrder(sum , root);
        
//         return sum ;
        return dfs(root , false);
        
    }
};