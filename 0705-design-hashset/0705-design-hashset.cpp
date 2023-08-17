// https://www.youtube.com/watch?v=IjxkD8L2cOM&list=PLjkkQ3iH4jy-QRceXhVwYjJ7ToNsBs0Il&index=9
//Fraz
//Throuh doubly ll

class MyHashSet {
public:
    
    vector<list<int>>arr;//Doubly linked list in C++
    int n;
    
    MyHashSet() {
        n=100;
        arr.resize(n);
    }
    
    int hash(int key)
    {
        return key%n;
    }
    
    list<int>::iterator search(int key)
    {
        int i=hash(key);
       return find(arr[i].begin(),arr[i].end(),key);
        
    }
    
    void add(int key) {
        if(contains(key))return;
        int i=hash(key);
        arr[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key))return;
        int i=hash(key);
        auto temp=search(key);
        arr[i].erase(temp);
    }
    
    bool contains(int key) {
        int i=hash(key);
        if(search(key)!=arr[i].end())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */