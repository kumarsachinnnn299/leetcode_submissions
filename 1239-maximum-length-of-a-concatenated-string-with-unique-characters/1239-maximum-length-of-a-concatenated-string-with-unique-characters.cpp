class Solution {
public:
    
    bool isvalid(string &s,vector<int>&charc)
    {    
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(charc[s[i]-'a'])return false;
            if(i>0)
             {
                 if(s[i]==s[i-1])return false;
             }
        }
        return true;
    }      
    
                     
    
    int helper(int idx,vector<string>&arr,vector<int>&charc,int len)
    {
        if(idx>=arr.size()){
            return len;
        }
        if(isvalid(arr[idx],charc)==false)return helper(idx+1,arr,charc,len);
        else{
            int t1= helper(idx+1,arr,charc,len);
            len+=arr[idx].size();
            for(auto i:arr[idx]){
                charc[i-'a']=1;  
            }
            int t2=helper(idx+1,arr,charc,len);
            for(auto i:arr[idx])charc[i-'a']=0;
            len-=arr[idx].size();
            
            return max(t1,t2);
            
            
        }
    }
    
    int maxLength(vector<string>& arr) {
        vector<int>charc(26);
        return helper(0,arr,charc,0);
       
    }
};