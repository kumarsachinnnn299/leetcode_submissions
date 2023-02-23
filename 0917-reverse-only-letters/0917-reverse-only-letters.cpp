class Solution {
public:
    string reverseOnlyLetters(string s) {
       int st,e;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]-'a'<26&&s[i]-'a'>=0)||(s[i]-'A'<26&&s[i]-'A'>=0)){
                st=i;
                break;}
        }
         for(int i=s.size()-1;i>=0;i--)
        {
            if((s[i]-'a'<26&&s[i]-'a'>=0)||(s[i]-'A'<26&&s[i]-'A'>=0)){
                e=i;
                break;}
        }
        while(st<e)
        {
            swap(s[st++],s[e--]);
            while(st<e){
                if((s[st]-'a'<26&&s[st]-'a'>=0)||(s[st]-'A'<26&&s[st]-'A'>=0)){
                    
                break;
                }
                else st++;
            }
            while(e>st){
                if((s[e]-'a'<26&&s[e]-'a'>=0)||(s[e]-'A'<26&&s[e]-'A'>=0)){
                    
                break;}
            else e--;}
        }
        return s;
    }
};