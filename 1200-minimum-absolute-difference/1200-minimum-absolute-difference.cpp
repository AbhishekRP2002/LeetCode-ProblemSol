class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      sort(arr.begin() , arr.end());
      vector<vector<int>>ans;
        vector<int>temp;
        int minDiff = INT_MAX;
        map<int , vector<vector<int>>>mp;
        
        int n = arr.size();
        for(int i= 0;i<n-1;++i)
        {
            minDiff = min(minDiff , arr[i+1] - arr[i]);
           if(minDiff >= arr[i+1] - arr[i])
           {
               
            temp.push_back(arr[i]);
            temp.push_back(arr[i+1]);
            mp[minDiff].push_back(temp);
            temp.clear();
           }
        }
        
        ans = mp[minDiff];
        return ans;
    }
};