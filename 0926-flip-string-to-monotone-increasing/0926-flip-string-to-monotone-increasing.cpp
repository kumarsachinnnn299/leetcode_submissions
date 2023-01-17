// https://leetcode.com/problems/flip-string-to-monotone-increasing/discuss/189751/C%2B%2B-one-pass-DP-solution-0ms-O(n)-or-O(1)-one-line-with-explaination.

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int count1=0,flip=0;
        for(auto i:s)
        {
            if(i=='1')count1++;
            else{
                flip++;
            }
            flip=min(flip,count1);
        }
        return flip;
    }
};