// https://www.youtube.com/watch?v=G_jQvLOs7tE
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        
       
        if(left.size()==0){
             sort(right.begin(),right.end());
            return n-right[0];}
        if(right.size()==0){
            sort(left.begin(),left.end());
            return left[left.size()-1];
        }
        sort(left.begin(),left.end());
         sort(right.begin(),right.end());
       return max(left[left.size()-1],n-right[0]);
    }
};