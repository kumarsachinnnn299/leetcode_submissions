//Link: https://leetcode.com/problems/power-of-two/discuss/1638704/C%2B%2B-EASY-TO-SOLVE-oror-All-INTERVIEW-APPROACHES-with-Detailed-Explanations

//Soln:-
// Now consider :-
// bit representation of 7  -> 0111
// bit representation of 8  -> 1000
// bitwise AND of 7 and 8 -> 0000
// we are gonna use this property for for all numbers which are powers of two



class Solution {
public:
    bool isPowerOfTwo(int n) {        
      if(n<=0)return false;
       if(n&n-1)return false;
        return true;
    }
};

