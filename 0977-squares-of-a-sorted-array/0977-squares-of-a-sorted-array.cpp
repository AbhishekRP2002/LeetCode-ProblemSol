class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
vector<int>temp(n,0);
        int start=0 , end=n-1;
        for(int i=n-1;i>=0;--i)
        {
            if(abs(nums[start])>=abs(nums[end]))
            {
                temp[i]= nums[start]*nums[start];
                start++;
            }
            else if(abs(nums[start])<abs(nums[end]))
            { 
            
               temp[i] = nums[end]*nums[end];
               end--;
            }
        }
        return temp;
    }
};