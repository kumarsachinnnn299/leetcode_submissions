//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=3t1AOF0vj5s&list=PLjeQ9Mb66hM33kyoJjJbHf72Rb0G70Sae&index=7
// Three pointers se ho jayega sort krke
//Bro coders

class Solution{
    public:
    int closest3Sum(int nums[], int N, int target)
    {
        // code here
         sort(nums,nums+N);
        int diff=INT_MAX, ans=0;
        for(int i=0;i<N;i++)
        {
            int j=i+1;
            int k=N-1;
            while(j<k)
            {
                int temp=nums[i]+nums[j]+nums[k];
                if(temp==target)return target;
                if(abs(temp-target)<diff)
                {
                    diff=abs(temp-target);
                    ans=temp;
                }
                if(temp>target)
                {
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends