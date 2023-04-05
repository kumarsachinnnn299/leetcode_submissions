// https://www.youtube.com/watch?v=xDN7LSSmvDU

class Solution {
public:
    int minimizeArrayValue(vector<int>& A) {
        long long sum = 0, res = 0;
        for (int i = 0; i < A.size(); ++i) {
            sum += A[i];
            res = max(res, (sum + i) / (i + 1));
        }
        return (int)res;
    }
};