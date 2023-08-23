//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends

// https://www.youtube.com/watch?v=wZENBuWh-C0&t=794s

class Solution
{
    public:
    string rearrangeString(string s)
    {
 vector<int>hash(26);
        for(auto i:s)hash[i-'a']++;
        int max=0,letter;
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i]>max){
                max=hash[i];
                letter=i;
            }
        }
        
       
        if(max>((s.size()+1)/2))return "-1";
        int n=s.size();
         vector<char>res(n);
        
        string ans="";
        int idx=0;
        while(hash[letter])
        {
           res[idx]=char('a'+letter);
            idx+=2;
            hash[letter]--;
        }
        
       
        for(int i=0;i<26;i++)
        {
            while(hash[i])
            {
                if(idx>=res.size())idx=1;
                res[idx]=char('a'+i);
                hash[i]--;
                idx+=2;
            }
            
        }
        for(int i=0;i<res.size();i++)ans+=res[i];
        
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
	    string str;
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}
// } Driver Code Ends