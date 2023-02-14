// https://www.youtube.com/watch?v=jCEmOqL8W80

class Solution {
public:
    string addBinary(string a, string b) {
        int alen=a.size(),blen=b.size(),i=0,carry=0;
        string ans="";
        
        while(i<alen||i<blen||carry)
        {
            int x=0;
            if(i<alen&&a[alen-i-1]=='1')x=1;
            int y=0;
            if(i<blen&&b[blen-i-1]=='1')y=1;
            ans=to_string((x+y+carry)%2)+ans;//ye reverse krne ka kaam kr rha h
            carry=(x+y+carry)/2;
            i++;
        }
        return ans;
        
    }
};