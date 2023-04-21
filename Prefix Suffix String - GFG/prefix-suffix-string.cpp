//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

// https://www.youtube.com/watch?v=R8iH9c3-FmY

class Trie{
    
    public:
       Trie* arr[26];
};

Trie* getnode()
{
    Trie* node=new Trie();
    for(int i=0;i<26;i++)
    {
        node->arr[i]=NULL;
        
    }
    return node;
}

void insert(Trie* root, string word)
{
    Trie* node=root;
    for(int i=0;i<word.size();i++)
    {   int idx=word[i]-'a';
        if(!node->arr[idx])
        {
            node->arr[idx]=getnode();
        }
        node=node->arr[idx];
    }
}

bool search(Trie* root, string word)
{
    Trie * ptr=root;
    for(int i=0;i<word.size();i++)
    {
        int idx=word[i]-'a';
        if(ptr->arr[idx]==NULL)return false;
        ptr=ptr->arr[idx];
    }
    return true;
}


class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        Trie* node=getnode();
        for(auto i:s1)
        {
            insert(node,i);
            reverse(i.begin(),i.end());
            insert(node,i);
        }
        
        int ans=0;
        for(auto i:s2)
        {   
            string str=i;
            reverse(str.begin(),str.end());
            if(search(node,i)||search(node,str))ans++;
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends