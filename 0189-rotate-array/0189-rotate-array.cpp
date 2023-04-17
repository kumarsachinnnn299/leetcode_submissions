
/*
approach-> 
a) reverse last k elements
b) reverse previous n-k elements
3) reverse whole array

*/

//left rotate k liye bas ulta kro
/*

approach-> 
a) reverse first k elements
b) reverse next n-k elements
3) reverse whole array
*/



// https://www.youtube.com/watch?v=f-Kfg6ujpG8&list=PLjeQ9Mb66hM33kyoJjJbHf72Rb0G70Sae
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k==0)return;
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};