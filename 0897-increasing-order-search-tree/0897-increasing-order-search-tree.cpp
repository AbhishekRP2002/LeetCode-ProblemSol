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
    void inOrder(TreeNode* root , vector<int>& v)
    {
        if(root==NULL)
            return;
        
        inOrder(root->left , v);
        v.push_back(root->val);
        inOrder(root->right , v);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
      //Inorder Traversal se Skewed Binary tree  or degenerate tree form karo
       
        vector<int>v;
        inOrder(root, v);
        
        TreeNode* temp = new TreeNode(v[0]);
        TreeNode* head = temp;
        
        int i=1 , n = v.size();
        // cout<<temp->val<<"\n";
        while(i < n)
        {
            TreeNode* x = new TreeNode(v[i++]);
            temp->right = x;
            temp = temp->right;
            
        }
        
        return head;
    }
};