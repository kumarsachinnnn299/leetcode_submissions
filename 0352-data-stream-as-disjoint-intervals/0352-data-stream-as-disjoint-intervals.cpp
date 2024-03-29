// https://www.youtube.com/watch?v=vsq18CFqses

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
        int s=*(st.begin()),e=*(st.begin());
        for( auto i=++st.begin();i!=st.end();i++)
        {
            if((*i)-e==1)
            {
                e++;;
            }
            else{
                ans.push_back({s,e});
                s=*i;
                e=*i;
            }
        }
        ans.push_back({s,e});
        
        return ans;
        
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */