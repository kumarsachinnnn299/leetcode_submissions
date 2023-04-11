//https://www.youtube.com/watch?v=dzYq5VEMZIg
//Backtracking question

class Solution {
public:
    
    int helper(int n,int k)
    {
         if(n==1)return 0;
         int temp=helper(n-1,k);
        int temp2=(temp+k)%n;
        return temp2;
    }
    
    int findTheWinner(int n, int k) {
        return helper(n,k)+1;  
    }
};