//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://www.youtube.com/watch?v=nSff-h4h68A
//Bit manipulation
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xorv=nums[0];
        for(int i=1;i<nums.size();i++)xorv^=nums[i];
       int setbit=0;
       for(int i=0;i<=32;i++)
       {
            int num=1<<i;
            if(num&xorv)
            {
                setbit=num;
                break;
            }
       }
       int n1=0,n2=0;
       for(auto i:nums)
       {
           if(i&setbit)n1^=i;
           else n2^=i;
       }
       if(n1<n2)return {n1,n2};
       return {n2,n1};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends