class SummaryRanges {
    set<int>st;
public:
    
    SummaryRanges() {
      
    }
    
    void addNum(int value) {
        st.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>ans;
        int s=-1,e=-1;;
        for( auto &i:st)
        {
            if(s==-1)
            {
                s=i;
                e=i;
            }
            else if(i-e==1)
            {
                e=i;
            }
            else{
                ans.push_back({s,e});
                s=i;
                e=i;
            }
        }
          if(s!=-1)ans.push_back({s,e});
               
        return ans;
        
    }
    
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */