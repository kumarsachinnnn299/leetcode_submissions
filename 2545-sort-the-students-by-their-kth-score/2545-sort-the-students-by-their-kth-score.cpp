//Khud kiya

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int idx=k;
        sort(score.begin(),score.end(),[&k](vector<int>&A,vector<int>&B)
             {return A[k]>B[k];
});
        return score;
    }
};