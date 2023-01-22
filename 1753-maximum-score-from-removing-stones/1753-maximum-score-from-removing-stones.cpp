class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans = 0;
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        while((a>0 and b>0) or(c>0 and b>0) or (a>0 and c>0))
        {
            ans++;
            int temp1 = pq.top();
            pq.pop();
            int temp2 = pq.top();
            pq.pop();
            if((temp1 + temp2) == (a+b))
            {
                a--;
                b--;
                pq.push(a);
                pq.push(b);
            }
            else if((temp1 + temp2) == (c+b))
            {
                b--;
                c--;
                pq.push(c);
                pq.push(b);
                
            }
            else if( (temp1 + temp2) == (a+c) )
            {
                c--;
                a--;
                pq.push(a);
                pq.push(c);
            }
        }
        return ans;
    
    }
};