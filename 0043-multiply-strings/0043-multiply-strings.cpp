// https://www.youtube.com/watch?v=HhwZ1O6TNLE

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")return "0";
        vector<int>arr(num1.size()+num2.size());
        
        for(int i=num1.size()-1;i>=0;i--)
        {
            for(int j=num2.size()-1;j>=0;j--)
            {
                arr[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                arr[i+j]+=arr[i+j+1]/10;
                arr[i+j+1]%=10;
            }
        }
            int i=0;
            while(arr[i]==0&&i<arr.size())i++;
            string ans="";
           while(i<arr.size())
           {
               ans.push_back(arr[i]+'0');
               i++;
           }
            return ans;
        
    }
};