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
       vector<string>v;
    void func(TreeNode* root , string s)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left ==NULL and root->right == NULL)
        {
            s+=char(root->val + 97);
            reverse(s.begin() , s.end());
            v.push_back(s);
            return;
        }
        
        
        s+= (char)(root->val+97);
        func(root->left , s);
        func(root->right , s);
    }
    string smallestFromLeaf(TreeNode* root) {
       
     string s;
        func(root, s);
        sort(v.begin() , v.end());
        return v[0];
        
        
    }
};