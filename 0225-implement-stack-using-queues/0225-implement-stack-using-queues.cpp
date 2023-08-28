class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int s=q.size();
        s--;
        while(s--)
        {
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        int temp=q.front();
        q.pop();
        return temp;
    }
    
    int top() {
         int s=q.size();
        s--;
        while(s--)
        {
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        int temp=q.front();
        q.pop();
        q.push(temp);
        return temp;
        
    }
    
    bool empty() {
        return q.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */