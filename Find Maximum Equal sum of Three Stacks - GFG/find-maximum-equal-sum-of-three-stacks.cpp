//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
  
    
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
       long long suma=0,sumb=0,sumc=0;
       for(auto i:S1)suma+=i;
       for(auto i:S2)sumb+=i;
       for(auto i:S3)sumc+=i;
       long long minsum=min({suma,sumb,sumc});
       int i=0,j=0,k=0;
       while(i<N1&&j<N2&&k<N3)
       {
           if(suma>minsum){
               suma-=S1[i];
               i++;
           }
           if(sumb>minsum){
               sumb-=S2[j];
               j++;
           }
           if(sumc>minsum){
               sumc-=S3[k];
               k++;
           }
           
           
           
               minsum=min({suma,sumb,sumc});
           
           if(suma==sumb&&sumb==sumc)return suma;
           
       }
       return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends