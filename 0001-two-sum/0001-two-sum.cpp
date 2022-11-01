class Solution {
public:
    
    int found_elem(vector<int>& arr , int val , int index )
    {
        

        for(int i = 0;i<arr.size();++i)
        {
            if(val == arr[i] and i!=index)
            {
                return i;
            }
        }
      return -1;  
    }
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>ans;
        vector<int>temp(nums);
       
        for(int i= 0 ; i<nums.size() ; ++i)
        {
            temp[i] = INT_MIN;
            int j = found_elem(temp , target - nums[i] , i)  ; 
           
            if(j>=0)
            {
            ans.push_back(i);
            ans.push_back(j);
            break;
            }
            
           
        }
    
   return ans;
    }
    
    };