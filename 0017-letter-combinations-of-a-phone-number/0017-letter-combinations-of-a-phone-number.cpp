class Solution {
public:
 
//     void util(int num , string str , vector<string>options , vector<string>& ans )
//     {
//         if(num == 0)
//         {
//             ans.push_back(str);
//             // cout<<str<<" ";
//             return;
//         }
        
//         int rem = num%10;
//         string temp = options[rem];
//         for(int i=0;i<temp.length();++i)
//         {
//             str = temp[rem] + str;
//             cout<<str<<" ";
//             util(num/10 , str , options , ans);
//         }
        
//     }
//     vector<string> letterCombinations(string digits) {
        
//         int  num = stoi(digits);
       
//         vector<string>ans;
//         int n = digits.length();
//         string str = "";
//         vector<string>options = {"", "", "abc","def","ghi", "jkl" ,"mno" ,"pqrs", "tuv" , "wxyz"};
//         util(num , str , options, ans);
        
//         return ans;
        
//     }
// };
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
		vector<string> result;
        result.push_back("");
        
        for(auto digit: digits) {
            vector<string> tmp;
            for(auto candidate: pad[digit - '0']) {
                for(auto s: result) {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
    }
};