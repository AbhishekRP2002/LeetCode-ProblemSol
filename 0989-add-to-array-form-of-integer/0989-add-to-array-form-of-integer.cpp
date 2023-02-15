class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
         int n = num.size();
//         long long int numbr = 0;
//         for(int i=0;i<n;i++)
//         {
//             numbr = (numbr*10 + num[i]);
//         }
        
//         long long int newNumbr = numbr + k;
        
//         cout<<newNumbr<<"\n";
//         vector<int>ans;
        
//         while(newNumbr > 0)
//         {
//             int rem = newNumbr%10;
//             newNumbr /= 10;
//             ans.push_back(rem);
//         }
        
//         reverse(ans.begin() , ans.end());
        
//         return ans;
        
//         above code will lead to run time error
 
        // carry k itself within the array
        
        for(int i= n-1;i>=0 and k>0;i--)
        {
            k+=num[i];
            num[i]=k%10;
            k/=10;
          
        }
        
        while(k>0)
        {
            num.insert(num.begin() , k%10);
            k = k/10;
        }
        
        return num;
        
    }
};