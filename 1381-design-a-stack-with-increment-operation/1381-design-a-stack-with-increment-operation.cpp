class CustomStack {
public:
    int s;
    vector<int>arr;
    
    CustomStack(int maxSize) {
        s=maxSize;
    }
    
    void push(int x) {
        if(arr.size()<s)
        {
            arr.push_back(x);
        }
    }
    
    int pop() {
        if(arr.size()){
            int temp=arr.back();
            arr.pop_back();
            return temp;
        }
        else return -1;
    }
    
    void increment(int k, int val) {
        int size=arr.size();
        for(int i=0;i<min(size,k);i++)arr[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */