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
    void constructBST(TreeNode* &root, int elem)
    {
        if(!root)
        {
            root = new TreeNode(elem);
            return;
        } 
        
        if(root->val > elem)
           constructBST(root->left , elem);
        else
            constructBST(root->right , elem);
  
            
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        if(n==0)
            return NULL;
        TreeNode* root = NULL;
        // if(n==1)
        //     return root;
        
        for(auto elem:preorder)
        constructBST(root, elem);
        
        return root;
    }
};