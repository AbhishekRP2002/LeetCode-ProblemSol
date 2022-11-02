class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        int ct= 0;
        while(ct<l.size())
        {
            int start = l[ct];
            int end = r[ct];
            vector<int>temp;
            for(int i=start;i<=end;++i)
                temp.push_back(nums[i]);
            
            sort(temp.begin() , temp.end());
            int diff = temp[1] - temp[0];
            int flag = 0;
            for(int j=0;j<end-start;j++)
            {
                if((temp[j+1] - temp[j]) != diff)
                {
                   flag = 1;
                }
                
            }
            if(flag==1)
                ans.push_back(false);
            else if(flag==0)
                ans.push_back(true);
            ct++;
           
            
        }
        return ans;
        
    }
};