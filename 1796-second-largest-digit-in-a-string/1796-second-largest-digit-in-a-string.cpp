class Solution {
public:
    int secondHighest(string s) {
       priority_queue<int>pq;
        set<int>st;
        int ctr = 0;
        for(auto i:s)
        {
            if( i >='0' and i  <='9')
            {
                st.insert(i-'0');
                ctr++;
            }
        }
        
        if(ctr<=1)
            return -1;
        for(auto i:st)
            pq.push(i);
       pq.pop();
        if(pq.size()!=0)
        return pq.top();
        else
            return -1;
    }
};