//Good question
//Only keep k largest element in priority queue

class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    int k1;
    KthLargest(int k, vector<int>& nums) {
        k1=k;
        for(auto i:nums)add(i);
    }
    
    int add(int val) {
        if(q.size()<k1)q.push(val);
        else{
            if(val>q.top())
            {
                q.pop();
                q.push(val);
            }
        }
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */