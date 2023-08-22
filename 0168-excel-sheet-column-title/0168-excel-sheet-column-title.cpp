class Solution {
public:
    string convertToTitle(int n) {
        
        string ans="";
        while(n)
        {
            int move=(n-1)%26;
            // cout<<move<<endl;
            ans=char(65+move)+ans;
            n--;
            (n)/=26;
            
            // cout<<n<<endl;
        }
        return ans;
        
    }
};