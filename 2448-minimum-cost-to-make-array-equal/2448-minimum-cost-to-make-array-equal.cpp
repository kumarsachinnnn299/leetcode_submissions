//ND

class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int,int>>temp;
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++){
            temp.push_back({nums[i], cost[i]});
            sum += cost[i];
        }
        sort(temp.begin(), temp.end());
        
        for(int i = 0; i < nums.size(); i++){
            nums[i] = temp[i].first;
            cost[i] = temp[i].second;
        }

        long long median = sum/2;


        long long y = 0;
        int target = -1;


        for(int i = 0; i < nums.size(); i++){
            y  += cost[i];
            if(y > median){
                target = nums[i];
                break;
            }
        }

        long long ans = 0;

        for(int i = 0; i < nums.size(); i++){
            ans += abs((long long)nums[i] - (long long)target)*(long long )cost[i];
        }
        return ans;
    }
};