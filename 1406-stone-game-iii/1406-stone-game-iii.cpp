
// https://www.youtube.com/watch?v=5zfsDxERaik&t=173s
//Kind of formula bnaya h 


class Solution {
public:
    string stoneGameIII(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n);
       
        for(int i=n-1;i>=0;i--)
        {
            int temp=INT_MIN,sum=0;
            
            for(int j=0;j<3&&i+j<n;j++)
            { 
               
                sum+=arr[i+j];
                int opposite=0;
                if(i+j+1<n)opposite=dp[i+j+1];
                temp=max(temp,sum-opposite);
            }
            dp[i]=temp;
        }
        
        // for(auto i:dp)cout<<i<<' ';
        if(dp[0]>0)return "Alice";
        if(dp[0]<0)return "Bob";
        return "Tie";
        
        // return "";
    }
};