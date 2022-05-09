//problem link: https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> s;
    stack<int> s2;
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(s2.empty()){
            while(!s.empty()){
                int x=s.top();
                s2.push(x);
                s.pop();
            }
            
        }
        int temp=s2.top();
            s2.pop();
        return temp;
    }
    
    int peek() {
         if(s2.empty()){
            while(!s.empty()){
                int x=s.top();
                s2.push(x);
                s.pop();
            }
            
        }
        int temp=s2.top();
            return temp;
    }
    
    bool empty() {
        return s.empty()&&s2.empty();
    }
};
