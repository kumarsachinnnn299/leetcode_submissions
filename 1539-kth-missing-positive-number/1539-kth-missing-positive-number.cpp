// https://leetcode.com/problems/kth-missing-positive-number/discuss/3262334/Day-65-oror-Binary-Seach-oror-O(logn)-time-O(1)-space-oror-Easiest-Beginner-Friendly-Sol

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int n = arr.size();
        int start = 0, end = n-1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] - (mid + 1) < k)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start + k;
     
    }
};