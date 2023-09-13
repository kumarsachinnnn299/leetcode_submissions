// https://www.youtube.com/watch?v=PzBYQA6FshA

//Firstly assign 1 to all
//Start iterating one time from start and one time from end
//in both iterations, at each index increase value if its value is greater than previous
//Take max of both and return 

class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        vector<int>front(n,1),back(n,1);
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                front[i]=front[i-1]+1;
            }
            if(arr[n-i-1]>arr[n-i])
            {
                back[n-i-1]=back[n-i]+1;
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++)ans+=max(front[i],back[i]);
        return ans;
    }
};