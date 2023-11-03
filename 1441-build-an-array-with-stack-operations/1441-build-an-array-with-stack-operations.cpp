class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        vector<int>curr;
        int idx=0;//to check kha tak match ho gya h target vector m
        for(int i=1;i<=n;i++)
        {   if(idx==target.size())break;
            if(curr.size()==0)
            {
                curr.push_back(i);
                ans.push_back("Push");
                if(i==target[idx])idx++;
            }
            else if(i==target[idx])
            {
                if(idx==0&&curr.size())
                {
                    while(curr.size())
                    {
                        curr.pop_back();
                        ans.push_back("Pop");
                    }
                }
                if(idx>0&&target[idx-1]!=curr[curr.size()-1])
                {
                    while(curr.size()&&curr[curr.size()-1]!=target[idx-1])
                    {
                        curr.pop_back();
                        ans.push_back("Pop");
                    }
                }
                curr.push_back(i);
                idx++;
                ans.push_back("Push");
            }
            else if(i!=target[idx])
            {
                curr.push_back(i);
                ans.push_back("Push");
            }
        }
        
    
        return ans;
        
    }
};