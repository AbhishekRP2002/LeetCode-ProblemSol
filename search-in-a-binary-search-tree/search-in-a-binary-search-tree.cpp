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
    TreeNode* searchBST(TreeNode* root, int val) {
//         if(root==NULL)
//             return NULL ;
//         if(root->val == val)
//             return root;
        
//         if(root->val > val)
//             searchBST(root->left , val);
//         else searchBST(root->right , val);
        
        TreeNode* temp = root;
        
        while(temp!=NULL)
        {
            if(temp->val==val)
                return temp;
            
            else if(temp->val > val) //left subtree
                temp = temp->left;
            else temp = temp->right; //right sub tree search space
        }
        return NULL;

    }
};