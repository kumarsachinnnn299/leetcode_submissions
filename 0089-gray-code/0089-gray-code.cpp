//Sumeet malik: // https://www.youtube.com/watch?v=KOD2BFauQbA&list=PL-Jc9J83PIiFJRioti3ZV7QabwoJK6eKe&index=5
// https://www.youtube.com/watch?v=Fha1CSxwvGg
//second video se bas ye jaana how to convert binary string to integer
class Solution {
public:
    
    vector<string> helper(int n)
    {
        if(n==1)return{"0","1"};
        vector<string>temp=helper(n-1);
        vector<string>ans;
        for(int i=0;i<temp.size();i++)
        {
            ans.push_back("0"+temp[i]);
        }
        for(int i=temp.size()-1;i>=0;i--)
        {
            ans.push_back("1"+temp[i]);
        }
        return ans;
        
    }
    
    vector<int> grayCode(int n) {
      vector<string>arr=helper(n);
        vector<int>ans;
        for(int  i=0;i<arr.size();i++)
        {
            ans.push_back(stoi(arr[i],0,2));
        }
        return ans;
        
    }
};