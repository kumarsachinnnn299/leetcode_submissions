//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

// https://www.youtube.com/watch?v=CywIodsJI7w&list=PLjeQ9Mb66hM2xgXW01bdC8luDS8iyZSMF&index=10

//Ek bar dekhna hi  pdega how loops are running

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        // code here 
        vector<int>ans;
        int c1=0,c2=arr[0].size(),r1=0,r2=arr.size();
        while(c1<c2&&r1<r2)
        {
            for(int i =c1;i<c2;i++)
            {
                ans.push_back(arr[r1][i]);
            }
            r1++;
            for(int i=r1;i<r2;i++)
            {
                ans.push_back(arr[i][c2-1]);
            }
            c2--;
            
            if(r1<r2)
            {
                for(int i=c2-1;i>=c1;i--)
                {
                    ans.push_back(arr[r2-1][i]);
                }
                 r2--;
            }
           
            if(c1<c2)
            {
                for(int i=r2-1;i>=r1;i--)
                {
                    ans.push_back(arr[i][c1]);
                }
                c1++;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends