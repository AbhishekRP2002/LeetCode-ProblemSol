class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res(candies.size() , false);
        // res[i] == true iff maxCandiesPossible = candies[i] + extraCand
        
        int maxCand = INT_MIN;
        for(auto i:candies)
        {
            
                maxCand = max( i , maxCand);
        }
        
        for(int i=0;i<candies.size();++i)
        {
            if(candies[i] + extraCandies >= maxCand)
                res[i] = true;
        }
        
        return res;
    }
};