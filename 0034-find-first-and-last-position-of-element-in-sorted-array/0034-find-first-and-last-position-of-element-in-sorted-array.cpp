class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
 vector<int>v;
auto check=find(nums.begin(),nums.end(),target);
if(check==nums.end())
{
v.push_back(-1);
v.push_back(-1);}
else{
auto it=lower_bound(nums.begin(),nums.end(),target);
auto it1=upper_bound(nums.begin(),nums.end(),target);

        int a=it-nums.begin();
        int b=it1-nums.begin()-1;
        v.push_back(a);
        v.push_back(b);
    }  
   
    return v;
    }   

};