class Solution {
public:
    int findNumbers(vector<int>& nums) {
      int ctr = 0;
        int n = nums.size();
        for(int i=0;i<n;++i)
        {
            string str = to_string(nums[i]);
            int size = str.length();
            if(size%2==0)
                ctr++;
                
        }
        
        return ctr;
    }
};