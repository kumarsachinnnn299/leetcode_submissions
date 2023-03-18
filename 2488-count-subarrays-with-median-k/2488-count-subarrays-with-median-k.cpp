
//Complex implementation
// https://www.youtube.com/watch?v=CPKVt3r-eTQ&t=1023s

class Solution {
public:
  long long help(int n,vector<int> v,int k){
    vector<int>arr(n*2+1);
      long long curr=n,total=0,ans=0;
      arr[n]=1;
      for(int i=0;i<n;i++)
      {
          if(v[i]>=k)
          {
              total+=arr[curr];
              curr++;
          }
          else{
              total-=arr[curr-1];
              curr--;
              
          }
          ans+=total;
          arr[curr]++;
      }
      return ans;
  }
    int countSubarrays(vector<int>& v, int k) {
        int n=v.size();
        return help(n,v,k) - help(n,v,k+1);
    }
};