class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        if(arr.size()==1)
        {
            if(arr[0]==0&&(n==1||n==0))return true;
            if(arr[0]==1&&n==0)return true;
            return false;
        }
        int c=0;
        for(int i=0;i<arr.size();i++)
        {   if(c>=n)return true;
            if(i==0)
            {
                if(arr[i]==0&&arr[i+1]==0)
                {
                    arr[i]=1;
                    c++;
                }
            }
            else if(i==arr.size()-1)
            {
                if(arr[i-1]==0&&arr[i]==0)
                {
                    arr[i]=1;
                    c++;
                }
            }
                        
          else { 
              if(arr[i-1]==0&&arr[i]==0&&arr[i+1]==0)
            {
                arr[i]=1;
                c++;
            }
            }
            // cout<<c<<endl;
            // for(auto i:arr)cout<<i<<' ';
            // cout<<endl;
        }
        return c==n;
        
    }
};