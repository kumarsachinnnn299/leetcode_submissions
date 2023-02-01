// https://leetcode.com/problems/greatest-common-divisor-of-strings/discuss/3124940/C%2B%2Borone-lineorBEATS-100-RuntimeororExplanation

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1)
        {
            return str1.substr(0,__gcd(str1.size(),str2.size()));
        }
        return "";
    }
};