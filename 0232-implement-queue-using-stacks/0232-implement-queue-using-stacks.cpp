class MyQueue {
public:
    //dequeue costly approach
    stack<int>s1; 
      stack<int>s2;
    MyQueue() {
      
    }
    
    void push(int x) {
        s1.push(x);
       
    }
    
    int pop() {
       while(!s1.empty())
       {
           int x  = s1.top();
           s2.push(x);
           s1.pop();
       }
        
        int pop_el = s2.top();
        
        s2.pop();
        
        while(!s2.empty())
        {
            int x = s2.top();
            s1.push(x);
            s2.pop();
            
        }
        
        return pop_el;
    }
    
    int peek() {
        
       while(!s1.empty())
       {
           int x  = s1.top();
           s2.push(x);
           s1.pop();
       }
     
        int pop_el = s2.top();
        
  
        
        while(!s2.empty())
        {
            int x = s2.top();
            s1.push(x);
            s2.pop();
            
        }
        
        return pop_el;
        
        
    }
    
    bool empty() {
      
        return s1.empty() == true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */