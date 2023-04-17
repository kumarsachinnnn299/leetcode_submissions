//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://www.youtube.com/watch?v=f-Kfg6ujpG8&list=PLjeQ9Mb66hM33kyoJjJbHf72Rb0G70Sae
/*

approach-> 
a) reverse first k elements
b) reverse next n-k elements
3) reverse whole array
*/

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
       
        d=d%n;
        if(d==0)return;
        
        reverse(arr, arr+d);
        reverse(arr+d, arr+n);
        reverse(arr,arr+n);
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends