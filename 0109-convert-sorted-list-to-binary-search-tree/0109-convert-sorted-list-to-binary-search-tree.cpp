/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* helper( vector<int>&v , int start , int end)
    {
        if(start > end)
            return NULL;
        
        int mid = end + (start-end)/2;
        TreeNode* temp = new TreeNode(v[mid]);
     
        temp->left = helper( v , start , mid-1);
        temp->right = helper( v , mid+1 , end );
        
        return temp;
        
        
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        while(head)
        {
            v.push_back(head->val);
            head = head->next;
        }
        
        int n = v.size();
      
        
        TreeNode* ans =  helper( v, 0 , n-1);
        
        return ans;
    }
};