
// https://www.youtube.com/watch?v=3t1AOF0vj5s&list=PLjeQ9Mb66hM33kyoJjJbHf72Rb0G70Sae&index=7
//Three pointers se ho jayega sort krke

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX, ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int temp=nums[i]+nums[j]+nums[k];
                if(temp==target)return target;
                if(abs(temp-target)<diff)
                {
                    diff=abs(temp-target);
                    ans=temp;
                }
                if(temp>target)
                {
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};