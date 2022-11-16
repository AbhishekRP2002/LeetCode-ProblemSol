class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
      int n = pref.size();
	int temp = 0;

	for(int i = 0; i < n; i++) 
	{
		pref[i] ^= temp; //ans[i] = pref[i] ^ temp
		temp ^=  pref[i]; //update temp to include curr element as well
	}
	return pref;
    }
};