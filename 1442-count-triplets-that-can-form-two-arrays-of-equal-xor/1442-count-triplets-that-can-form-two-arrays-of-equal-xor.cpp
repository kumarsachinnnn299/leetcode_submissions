// https://www.youtube.com/watch?v=sdJBPdoD3OY&list=PL-Jc9J83PIiFJRioti3ZV7QabwoJK6eKe&index=13

//Sumit bits playlist

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {    int xor1=0;
            xor1^=arr[i];
            for(int j=i+1;j<arr.size();j++)
            {
                xor1^=arr[j];
                    if(xor1==0)ans+=(j-i);
            }
        }
        return ans;
    }
};