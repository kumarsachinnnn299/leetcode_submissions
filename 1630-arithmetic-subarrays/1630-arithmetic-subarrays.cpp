class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        vector<int>temp;
        for(int i=0;i<l.size();i++)
        {
            temp=nums;
            int s=l[i],e=r[i];
            sort(temp.begin()+s,temp.begin()+e+1);
            // for(int j=s;j<=e;j++)cout<<temp[j]<<' ';
            // cout<<endl;
            if((e-s+1)==1)
            {
                ans.push_back(false);
            }
            else{
                int dif=temp[s+1]-temp[s];
                bool flag=true;
                for(int j=s+1;j<=e;j++)
                {
                    if((temp[j]-temp[j-1])!=dif)
                    {
                       flag=false;
                        break;
                    }
                }
                ans.push_back(flag);
                
            }
            
            
        }
        return ans;
    }
};