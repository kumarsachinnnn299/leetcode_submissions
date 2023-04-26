// https://leetcode.com/problems/add-digits/discuss/1754049/Easy-O(1)-Explanation-with-Example


class Solution {
public:
    int addDigits(int num) {
        return 1+(num-1)%9;
    }
};