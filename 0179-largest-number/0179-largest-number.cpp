class Solution {
public:
    static bool compare(string&a , string& b)
    {
        return (a+b > b+a);
    }
    string largestNumber(vector<int>& nums) {
        //sort according to the MSB value of the number in descending order
   string ans;
        vector<string>arr;
        for(auto i:nums)
        {
            arr.push_back(to_string(i));
        }
        
        sort(arr.begin() , arr.end() , compare);
    
        for(auto i: arr)
            ans+=i;
        
        if(ans[0]=='0')
        {
            while(ans.length() > 1)
                ans.erase(0,1);
        }
        
        return ans;
    }
};