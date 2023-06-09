class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
       int s=0,e=arr.size()-1;
        int temp=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]-'a'>(target-'a')){
                temp=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        if(temp==-1)return arr[0];
        return arr[temp];
    }
};