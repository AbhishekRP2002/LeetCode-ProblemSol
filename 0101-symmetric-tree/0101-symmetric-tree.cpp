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
    // bool isTreeSym(TreeNode* p , TreeNode* q)
    // {
    //     if((p == NULL and q != NULL )||(p != NULL and q == NULL) )
    //         return false;
    //     if(p->val != q->val)
    //         return false;
    //     return (isTreeSym(p->left , q->right) and isTreeSym(p->right , q->left));
    // }
    // bool isSymmetric(TreeNode* root) {
    //     if(root==NULL)
    //         return true;
    //     if(root->left == NULL and root->right ==NULL)
    //         return true;
    //    return isTreeSym(root->left , root->right);
    // }
    
     bool isSymmetric(TreeNode* root) {
        
        if(root==NULL) return true; 
        
        return isSymmetricTest(root->left,root->right);
    }
    
    bool isSymmetricTest(TreeNode* p , TreeNode* q){
        if(p == NULL && q == NULL) //left & right node is NULL 
            return true; 
        
        else if(p == NULL || q == NULL) //one of them is Not NULL
            return false; 
        
        else if(p->val!=q->val) 
            return false;
        
        return isSymmetricTest(p->left,q->right) && isSymmetricTest(p->right,q->left); 
    }
};