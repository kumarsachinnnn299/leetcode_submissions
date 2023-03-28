//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int c=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0){
                c++;
            }
            else if(arr[i]==1)
            {
                c1++;
            }
            else{
                c2++;
            }
        }
    int i=0;
    while(i<n)
    {
        if(c>0){
    arr[i++]=0;
            c--;
        }
        else if(c1>0){
    arr[i++]=1;
            c1--;
        }
        else{
   arr[i++]=2;
            c2--;
        }}

    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends