class Solution {
public:
    string addStrings(string num1, string num2) {
        
        map<int,char>mp;
        mp[0]='0';
         mp[1]='1';
         mp[2]='2';
         mp[3]='3';
         mp[4]='4';
         mp[5]='5';
         mp[6]='6';
         mp[7]='7';
         mp[8]='8';
         mp[9]='9';
        
        string ans="";
        int currsum=0,carry=0;
        int i=num1.size()-1,j=num2.size()-1;
        while(i>=0&&j>=0)
        {   currsum=0;
            currsum=(num1[i]-'0')+(num2[j]-'0')+carry;
            carry=currsum/10;
            ans=mp[currsum%10]+ans;
         i--;
         j--;
        }
        if(i<0&&j>=0)
        {
            while(j>=0)
            {
                currsum=0;
                currsum=num2[j]-'0'+carry;
                carry=currsum/10;
                ans=mp[currsum%10]+ans;
                j--;
            }
        }
        else if(i>=0&&j<0)
        {
            while(i>=0)
            {
                currsum=0;
                currsum=num1[i]-'0'+carry;
                carry=currsum/10;
                ans=mp[currsum%10]+ans;
                i--;
            }
        }
        if(carry>0)
        {
            ans=mp[carry]+ans;
        }
        return ans;
        
         
       
    }
};