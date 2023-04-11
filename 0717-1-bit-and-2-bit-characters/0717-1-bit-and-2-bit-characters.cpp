class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        // if()
        int n=bits.size();
        bool ans=false;
        for(int i=0;i<n;i++)
        {
            if(bits[i]==1)
            {
                ans=false;
                i++;
            }
            else{
                ans=true;
            }
        }
        return ans;
    }
};