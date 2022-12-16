class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int global = 0 , local = 0;
        int n = nums.size();
        map<int , int>m;
        for(int i=0;i<n;++i)
            m[nums[i]] = i;
        
      
        
        for(int  i =0 ;i<n-1;++i)
        {
            if(nums[i] > nums[i+1])
            {
                // int curInd = m[nums[i]];
                // int nexInd = m[nums[i+1]];
                // if(nexInd == curInd+1)
                    local++;
            }
        }
       
        
        bool flag = false;
        // for(auto i:m)
        // {
        //     if(flag==false)
        //     {
        //     base = i.second;
        //     flag = true;
        //     }
        //     else if(i.second < base)
        //     {
        //         ctr++;
        //         global+=ctr;
        //     }
        // }
        
//        
        for(int i=0;i<n;++i)
        {
            if(abs(nums[i]-i)>1)
                return false;
        }
        return true;
     }
};