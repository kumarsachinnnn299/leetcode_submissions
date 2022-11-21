// https://leetcode.com/problems/find-the-duplicate-number/discuss/73045/Simple-C%2B%2B-code-with-O(1)-space-and-O(nlogn)-time-complexity

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s=1,e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int temp=0;
            for(auto i:nums){
                if(i<=mid)temp++;
            }
            if(temp<=mid)s=mid+1;
            else e=mid-1;
        }
        return s;
    }
};
