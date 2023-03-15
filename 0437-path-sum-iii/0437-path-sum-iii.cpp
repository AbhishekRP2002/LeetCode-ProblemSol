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
    
//     void func(TreeNode* root , int targetSum , long long int curSum , int& ctr , map<int , int>m)
//     {
//         if(root==NULL)
//             return;
        
//         curSum += root->val;
//         if(m.count(curSum - targetSum))
//         {
//             ctr+=m[curSum - targetSum ];
//              cout<<curSum- targetSum <<"\n";
//         }
//         else if(curSum == targetSum)
//             ctr++;
        
        
       
//         m[curSum]++;
        
//         func(root->left , targetSum , curSum , ctr , m);
//         func(root->right , targetSum , curSum , ctr , m);
        
//         m[curSum]--;
        
//     }
    
//     int pathSum(TreeNode* root, int targetSum) {
//         int curSum = 0 , ctr =0;
//         map<int , int>m;
//         m[0]++;
//         func(root, targetSum ,curSum , ctr , m);
//         return ctr;
        
//     }
    
    
       unordered_map<long, int> map;
    int count = 0;
    
    void countPathSum(TreeNode* root, int target, long sum){
        if(!root)
            return;
        sum += root->val;        //Path sum from root
        if(sum == target)
            count++;
        if(map.find(sum - target) != map.end())         //checking whether any target sum path present in the path from root to the current node
            count += map[sum - target];
        map[sum]++;
        countPathSum(root->left, target, sum);
        countPathSum(root->right, target, sum);
        map[sum]--;      //After visiting the left and right subtree, we have to reduce this path sum count from map since we are leaving this path
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        countPathSum(root, targetSum, 0);
        return count;
    }
    
};