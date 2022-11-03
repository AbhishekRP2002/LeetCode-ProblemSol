class Solution {
public:
    int triangularSum(vector<int>& nums) {
       
        vector<int>temp1;
        vector<int>temp2(nums);
        int ans=0;
          int n = temp2.size();
        while(n>1)
        {
            
            for(int i=0;i<n-1;++i)
            {
                temp1.push_back((temp2[i] + temp2[i+1])%10);
                
            }
            
            temp2.clear();
            temp2 = temp1;
            n = temp1.size();
            temp1.clear();
        }
        
        ans = temp2[0];
        return ans;
    }
};