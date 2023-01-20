//Good concept

// https://www.youtube.com/watch?v=zUuLh6x1i6M&list=PLjeQ9Mb66hM3hgJfIvc32sTRQOpZ2SXxC&index=4

class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        int temp=5;
        while(temp<=n)
        {
         ans+=(n/temp);
            temp*=5;
        }
        return ans;
    }
};