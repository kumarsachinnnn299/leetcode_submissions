// https://www.youtube.com/watch?v=o84Vb1qbZms

/*

approach:
ek array m elements push krane h

1) iterate in given array and if curr element is greater than or equal to last element of storing array than directly push curr element is store array and push size of store array in ana array

2) if curr element is smaller than last element of store array than insert curr element at its upperbound in store array and push upperbound index of curr element  in ans array

*/


class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& nums) {
        vector<int>ans,store;
        ans.push_back(1);
        store.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>=store[store.size()-1]){
                store.push_back(nums[i]);
                ans.push_back(store.size());
                
            }
            else{
                int idx=upper_bound(store.begin(),store.end(),nums[i])-store.begin();
                store[idx]=nums[i];
                ans.push_back(idx+1);
            }
        }
        return ans;
    }
};