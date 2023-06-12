class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return {};
        vector<string>ans;
        int prev=nums[0],curr=nums[0];
        
        
        bool flag=false;
        for(int i=1;i<n;i++)
        {   flag=false;
            if(curr+1==nums[i])
            {
                curr=nums[i];
            }
            else{
                if(curr==prev)ans.push_back(to_string(prev));
                else ans.push_back(to_string(prev)+"->"+to_string(curr));
                prev=nums[i];
                curr=nums[i];
                flag=true;
                
            }
         // cout<<prev<<' '<<curr<<endl;
        }
//        
             if(curr==prev)ans.push_back(to_string(prev));
                else ans.push_back(to_string(prev)+"->"+to_string(curr));
//         
        
        
        
        
        return ans;
    }
};