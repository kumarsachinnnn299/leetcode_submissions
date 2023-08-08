//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=8I0KgBTSFcQ

class Solution
{
    public:
    int countFractions(int n, int num[], int den[])
    {
        map<pair<int,int>,int>mp;
        
        int ans=0;
        for(int i=0;i<n;i++)
        {   int t=__gcd(num[i],den[i]);//gcd se num and den ko divide krne par wo lowest form m aajayega fraction
            int currn=num[i]/t;//jis numerator pe hum abhi h
            int currd=den[i]/t;//Jis denominator pe hum abhi h
            
            int reqn=currd-currn;//Numerator required to make sum 1
            int reqd=currd;//denominator required to make sum 1
            if(mp.find({reqn,reqd})!=mp.end())ans+=mp[{reqn,reqd}];
            mp[{num[i]/t,den[i]/t}]++;
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
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends