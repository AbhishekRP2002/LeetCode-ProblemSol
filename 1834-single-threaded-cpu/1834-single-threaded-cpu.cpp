class Solution {
public:
    #define ll long long
 //sorting elements inside min heap on the basis of Processing time and index.
    struct compare{
        bool operator()(vector<int> &a,vector<int> &b){
            if(a[1]==b[1])
                return a[2]>b[2];
            return a[1]>b[1];
        }
    };
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();
		//Added index at the end to efficiently keep track of indices
        for(int i=0;i<n;i++){
            tasks[i].push_back(i);
        }
		//sorted the tasks on the basis of enqueue time
        sort(tasks.begin(),tasks.end(),[&](vector<int> &a,vector<int> &b){
		    if(a[0]==b[0])
			    return a[1]<b[1];
            return a[0]<b[0];
        });
        int i=0;
		//Min Heap with custom sorting on the basis of processing time and index.
        priority_queue<vector<int>,vector<vector<int>>,compare> q;
        ll time=tasks[0][0];
        while(i<n){
            if((ll)tasks[i][0]<=time){
                q.push(tasks[i]);
            }
            else{
                break;
            }
            i++;
        }
        vector<int> res;
        while(!q.empty()){
            vector<int> curr=q.top();
            q.pop();
            res.push_back(curr[2]);
            time+=curr[1];
            while(i<n){
                if((ll)tasks[i][0]<=time){
                    q.push(tasks[i]);
                }
                else{
                    break;
                }
                i++;
            }
			//If the task has enqueue time greater than current running time.
            if(i!=n and q.empty()){
                time=tasks[i][0];
                q.push(tasks[i]);
                i++;
                
            }
        }
        return res;
    }
};