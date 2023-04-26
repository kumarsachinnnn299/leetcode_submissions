// https://leetcode.com/problems/add-digits/discuss/1754049/Easy-O(1)-Explanation-with-Example


class Solution {
public:
    int addDigits(int num) {
        if(num==0)return 0;
        return num%9==0?9:num%9;
    }
};