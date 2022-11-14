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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        
        vector<vector<int>>ans;
        stack<vector<int>>s;
         int j = 0; 
        while(!q.empty())
        {
            
            int n = q.size();
            vector<int>v2;
            for(int i=0;i<n;++i)
            {
                TreeNode* temp = q.front();
                if(temp!=NULL)
                { v2.push_back(temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                 
                }
                else
                {
                
                    return ans ; 
                }
                
            }
            s.push(v2);
            v2.clear();
            
        }
        
vector<int>v;
        
while(!s.empty())
   {
       v = s.top();
       ans.push_back(v);
       s.pop();
       v.clear();
   }
        
        return ans;
    }
};