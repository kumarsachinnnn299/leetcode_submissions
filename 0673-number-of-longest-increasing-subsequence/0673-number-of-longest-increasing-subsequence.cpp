// https://www.youtube.com/watch?v=WcQ_y9TWhhw
//Not clear

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return n;
        vector<int>lis(n,1),count(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    
                    if(lis[j]>=lis[i]){
                        lis[i]=lis[j]+1;
                        count[i]=count[j];
                    }
                    else if(lis[i]==lis[j]+1)count[i]+=count[j];
                }
               
            }
        }
        
        int lislen=*max_element(lis.begin(),lis.end());
        int ans=0;
        for(int i=0;i<n;i++)if(lis[i]==lislen)ans+=count[i];
        return ans;
        
        
    }
};