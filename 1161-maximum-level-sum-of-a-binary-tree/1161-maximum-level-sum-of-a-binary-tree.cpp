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
    int maxLevelSum(TreeNode* root) {
        // level order traversal holding sum of each level and returning the maximum sum's level
        int maxSumLevel = 0;
        int maxSum= INT_MIN, level = 0;
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            
            level++;
            int tempSum = 0;
            int size = q.size();
            for(int i=0;i<size;++i)
            {
                TreeNode* node = q.front();
                tempSum+= node->val;
                q.pop();
                if(node->right)
                    q.push(node->right);
                if(node->left)
                    q.push(node->left);
                
            }
            
            
            if(tempSum > maxSum)
            {
                maxSum = tempSum;
                maxSumLevel = level;
            }
            
        }
        
        return maxSumLevel;
        
    }
};