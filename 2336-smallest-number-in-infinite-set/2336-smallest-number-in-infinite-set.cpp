//Khud kiya

class SmallestInfiniteSet {
public:
    
    vector<int>arr;
   
    
    SmallestInfiniteSet() {
        arr.resize(1000,1);
    }
    
    int popSmallest() {
        int i=0;
        while(arr[i]==-1)i++;
        arr[i]=-1;
        return i+1;
    }
    
    void addBack(int num) {
        if(arr[num-1]==-1)arr[num-1]=1;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */