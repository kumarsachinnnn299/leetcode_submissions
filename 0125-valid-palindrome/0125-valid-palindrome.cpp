// https://leetcode.com/problems/valid-palindrome/discuss/458911/Easy-C%2B%2B-Two-Pointers-O(n)-solution

class Solution {
public:
    bool isPalindrome(string str) {
        int s=0,e=str.size()-1;
        while(s<e)
        {
            if(!isalnum(str[s]))s++;
            else if(!isalnum(str[e]))e--;
            else if(tolower(str[s])!=tolower(str[e]))return false;
            else {
                s++;
                e--;}
        }
        return true;
    }
};