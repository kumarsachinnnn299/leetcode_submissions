//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// https://www.youtube.com/watch?v=-h1FHkDxpKs&list=PLjeQ9Mb66hM3hgJfIvc32sTRQOpZ2SXxC&index=5


class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> nums){
        // code here
        int n=N-2;
        int i;
        for( i=n;i>=0;i--)
        {
            if(nums[i]<nums[i+1])break;
            
        }
        
        if(i<0)
            {
                sort(nums.begin(),nums.end());
                return nums;
            }
        
        for(int j=nums.size()-1;j>i;j--)
        {
            if(nums[j]>nums[i])
            {
                swap(nums[i],nums[j]);
                sort(nums.begin()+i+1,nums.end());
                break;
            }
        }
        
        return nums;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends