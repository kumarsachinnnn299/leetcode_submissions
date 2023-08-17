//Fraz playlist
//https://www.youtube.com/watch?v=xVEGczCJCHs&list=PLjkkQ3iH4jy-QRceXhVwYjJ7ToNsBs0Il&index=10

class MyHashMap {
public:
    vector<list<pair<int,int>>>arr;
    int n;
    MyHashMap() {
        int n=1000001;//kuch bhi le skte h
        arr.resize(n);
    }
    
    int hash(int key)
    {
        return key%n;
    }
    
    
    list<pair<int,int>>::iterator search(int key)
    {   
        int i=hash(key);
        list<pair<int,int>>::iterator itr;
        itr=arr[i].begin();
        while(itr!=arr[i].end())
        {
            if(itr->first==key)return itr;
            itr++;
        }
        return itr;
    }
    
    void put(int key, int value) {
        int i=hash(key);
        remove(key);
        arr[i].push_back({key,value});
    }
    
    int get(int key) {
        int i=hash(key);
         list<pair<int,int>>::iterator itr=search(key);
        if(itr==arr[i].end())return -1;
        return itr->second;
    }
    
    void remove(int key) {
        int i=hash(key);
         list<pair<int,int>>::iterator itr=search(key);
        if(itr==arr[i].end())return;
        arr[i].erase(itr);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */