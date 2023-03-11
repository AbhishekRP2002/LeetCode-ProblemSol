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
    bool isCousins(TreeNode* root, int x, int y) {
       
        queue<TreeNode*>q;
        if(root==NULL)
            return false;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            bool x_ind = false, y_ind = false;
            for(int i=0;i<size;++i)
            {
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->val == x)
                {
                    x_ind = true;
                }
                else if(temp->val == y)
                    y_ind = true;
                
                if(temp->left and temp->right)
                {
                    if((temp->left->val == x and temp->right->val == y) or (temp->left->val == y and temp->right->val == x))
                        return false;
                }
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
                
            }
           
            
            if( x_ind and y_ind)
                return true;
            
        }
        
        return false;
        
        
    }
};