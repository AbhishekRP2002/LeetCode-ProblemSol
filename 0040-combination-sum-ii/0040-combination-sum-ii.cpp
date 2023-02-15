class Solution {
public:
   void findCombinations(int ind , vector<int>arr , vector<vector<int>>& ans ,vector<int>ds , int target)
{

if(target==0)
{
    ans.push_back(ds);
    return;
}

for(int i=ind;i<arr.size();++i)
{
    if(i>ind and arr[i] == arr[i-1])  // why i > ind condition ? 
    continue;
    if(arr[i] > target)
    break;

    ds.push_back(arr[i]);
    findCombinations(i+1 , arr , ans , ds , target - arr[i]);
    ds.pop_back();
} 
   }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findCombinations(0,nums, ans , ds , target);
        return ans;
    }
};