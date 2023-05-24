//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Not done ST
//https://leetcode.com/problems/expression-add-operators/discuss/3247714/C%2B%2B-Code

class Solution {
  public:
    void findAddOperator(string num , int target , 
    string path , long prev , long currSum, int index,
    vector<string>&ans){
        if(index == num.size()){
            if(currSum == target){
                ans.push_back(path);
                
            }
            return;
        }

        for(int i = index ; i< num.size() ; i++){
            if(i > index && num[index] == '0') break;
            string str = num.substr(index , i-index+1);
            long val = stol(str);

            if(index == 0){
                findAddOperator(num , target , str , val , val , i+1 , ans);
            }
            else{
                findAddOperator(num , target , path+'+'+str , val , currSum + val , i+1 , ans);
                findAddOperator(num , target , path+'-'+str , -val , currSum -val  , i+1 , ans);
                // 2 - 3 * 4 = -1 + 3 - 3 * 4 = 2 - 12 
                findAddOperator(num ,target , path+'*'+str ,prev * val , currSum - prev + prev * val  ,i+1 ,  ans );
            }
        }

        
    }
  
    vector<string> addOperators(string num, int target) {
        // code here
         vector<string>ans;
        findAddOperator(num , target , "" , 0 , 0 , 0 , ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends