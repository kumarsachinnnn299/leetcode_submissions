// https://leetcode.com/problems/kth-missing-positive-number/discuss/3262334/Day-65-oror-Binary-Seach-oror-O(logn)-time-O(1)-space-oror-Easiest-Beginner-Friendly-Sol

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s=0,e=arr.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if((arr[mid]-mid-1)<k)s=mid+1;
            else  e=mid-1;
   
            
           
        }
    
         return s+k;
     
    }
};