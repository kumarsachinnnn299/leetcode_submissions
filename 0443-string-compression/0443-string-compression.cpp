//simlple question

class Solution {
public:
    int compress(vector<char>& arr) {
     string ans="";
        ans+=arr[0];
        int c=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
            {
                c++;
            }
            else{
                if(c>1)
               { ans+=to_string(c);
                c=1;
               }
                ans+=arr[i];
            }
        }
        if(c>1)ans+=to_string(c);
        for(int i=0;i<ans.size();i++)arr[i]=ans[i];
        return ans.size();
        
    }
};