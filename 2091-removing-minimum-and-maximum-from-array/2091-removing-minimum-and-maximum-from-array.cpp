//Khud kiya

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxele=max_element(nums.begin(),nums.end())-nums.begin()+1;
        int minele=min_element(nums.begin(),nums.end())-nums.begin()+1;
        int ans=0;
        if(maxele<minele)
        {
            if(maxele<(nums.size()-minele+1)){
                ans+=maxele;
                if(minele-maxele>(nums.size()-minele+1))
                {
                    ans+=(nums.size()-minele+1);
                }
                else{
                    ans+=(minele-maxele);
                }
            }
            else{
                ans+=(nums.size()-minele+1);
                if(maxele<(minele-maxele))
                {
                    ans+=maxele;
                }
                else ans+=(minele-maxele);
            }
        }
        else{
            if(minele<(nums.size()-maxele+1))
            {
                ans+=minele;
                if(maxele-minele>(nums.size()-maxele+1))
                {
                    ans+=(nums.size()-maxele+1);
                }
                else ans+=(maxele-minele);
            }
            else{
                ans+=(nums.size()-maxele+1);
                if(minele<(maxele-minele))
                {
                    ans+=minele;
                }
                else ans+=(maxele-minele);
            }
        }
        return ans;
    }
};