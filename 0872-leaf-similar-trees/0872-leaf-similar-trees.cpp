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
    vector<int>v1;
    vector<int>v2;
    void solve1(TreeNode* root)
    {
        if(root==NULL)
            return;
        if(root->left==NULL and root->right==NULL)
            v1.push_back(root->val);
        solve1(root->left);
        solve1(root->right);
        
    }
     void solve2(TreeNode* root)
    {
        if(root==NULL)
            return;
        if(root->left==NULL and root->right==NULL)
            v2.push_back(root->val);
        solve2(root->left);
        solve2(root->right);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        solve1(root1);
        solve2(root2);
        for(auto i:v1)
            cout<<i<<" ";
        cout<<"\n";
        for(auto i:v2)
            cout<<i<<" ";
        
        return v1==v2;
    }
};