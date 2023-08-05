// https://www.youtube.com/watch?v=5P84A0YCo_Y&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=10
//Recursion playlist aditya verma

class Solution {
public:
    int kthGrammar(int n, int k) {
        
        if(n==1&&k==1)
        {
            return 0;
        }
        int len=pow(2,n-1);
        
        if(k<=(len/2))
        {
            return kthGrammar(n-1,k);
        }
        else{
            return 1-kthGrammar(n-1,k-(len/2));
        }
    }
};