//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

//Fraz playlist recursion

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
     void helper(int idx,vector<int>&nums,int sum,vector<int>temp,vector<vector<int>>&ans,int &target)
    {
        if(idx==nums.size()||sum>target)return;
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        helper(idx+1,nums,sum,temp,ans,target);
        temp.push_back(nums[idx]);
        sum+=nums[idx];
        helper(idx,nums,sum,temp,ans,target);
         sum-=nums[idx];
        temp.pop_back();
        
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>ans;
        unordered_set<int>st;
        for(auto i:A)st.insert(i);
        vector<int>b;
        for(auto i:st)b.push_back(i);
        sort(b.begin(),b.end());
        vector<int>temp;
        int s=0;
        helper(0,b,s,temp,ans,B);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends