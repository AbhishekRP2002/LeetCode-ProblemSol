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
    vector<int> largestValues(TreeNode* root) {
        
   
       vector<int>ans;
        
             if(!root)
            return ans;
        
      queue<TreeNode*>q;
        q.push(root);
        
        
        while(!q.empty())
        {
           int n = q.size();
            vector<int>v;
            for(int i=0;i<n;++i)
            {
                TreeNode* t = q.front();
                v.push_back(t->val);
                q.pop();
                if(t->right)
                    q.push(t->right);
                if(t->left)
                    q.push(t->left);
            }
            
            int maxi = INT_MIN;
            for(int i=0;i<v.size();++i)
            {
                maxi = max(maxi , v[i]);
            }
            
            ans.push_back(maxi);
        }
        
        
        return ans;
    }
};