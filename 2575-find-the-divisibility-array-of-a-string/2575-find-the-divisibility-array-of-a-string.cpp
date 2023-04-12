//Good qyestion
//De revise again
//https://www.youtube.com/watch?v=6Vj3P2mQBjU
class Solution {
public:
    vector<int> divisibilityArray(string word, long long m) {
        vector<int>ans;
        int n=word.size();
        long long rem=0;
        for(int i=0;i<n;i++)
        {   int currdigit=word[i]-'0';
            long long newdigit=(rem*10)+currdigit;
            if(newdigit%m==0)ans.push_back(1);
             else ans.push_back(0);
         rem=newdigit%m;
                
         
        }
        return ans;
    }
};