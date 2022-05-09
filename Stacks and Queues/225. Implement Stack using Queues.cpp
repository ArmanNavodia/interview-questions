//problem link: https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q;
    int peek=-1;
    void push(int x) {
        q.push(x);
        peek=x;
    }
    
    int pop() {
        int n=q.size();
        n-=1;
        while(n>=1){
            n--;
            peek=q.front();
            q.push(peek);
            q.pop();
        }
        int temp=q.front();
        q.pop();
        return temp;
    }
    
    int top() {
        return peek;
    }
    
    bool empty() {
        return q.size()==0;
    }
};
