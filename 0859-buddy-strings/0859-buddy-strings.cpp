class Solution {
public:
    bool buddyStrings(string s, string goal) {
      // Check if both the given strings are equal are not
        if(s==goal){
            // if any character repeats itself in the string then it returns true else false
            unordered_map<char,int> ml;
            for(int i=0;i<s.size();i++){
                if(ml[s[i]]==1){
                    return true;
                }
                ml[s[i]]++;
            }
                
        }
        else{
            int count=0;
            int st=0;
            int e=0;
            for(int i=0;i<s.size();i++){
                if(s[i]!=goal[i]){
                    count++;
                    if(count==1){
                        st=i;
                    }
                    else if(count==2){
                        e=i;
                    }
                }
            
            }
            if(count>2 or count==1){
                return false;
            }
            else if(count==2){
                swap(goal[st],goal[e]);
                if(s==goal){
                return true;   
    }
            }
               
            }
     return false;
    }
};