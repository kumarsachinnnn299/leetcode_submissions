class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)return false;
         bool flag=false,secondside=false;
        for(int i=1;i<arr.size();i++)
        {   if(arr[i]==arr[i-1])return false;
            if(arr[i-1]<arr[i])
            {   if(secondside)return false;
                flag=true;
            }
            else if(arr[i-1]>arr[i]){
                secondside=true;
            }
        }
        if(!secondside||!flag)return false;
        return true;
                                        
         }
        

};