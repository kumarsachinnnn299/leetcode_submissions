//ND

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        if(costs.size() == 1)
            return costs[0];
        int left_index = 0;
        int right_index = costs.size()-1;
        int count = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> hp;
        while(count < candidates and left_index < right_index){
            hp.push({costs[left_index],left_index});
            hp.push({costs[right_index],right_index});
            left_index++;
            right_index--;
            count++;
        }
        long long total_cost = 0;
        while(k--){
            auto pair = hp.top();
            hp.pop();
            total_cost += pair.first;
            int ind = pair.second;
            if(ind < left_index and left_index <= right_index){
                hp.push({costs[left_index],left_index});
                left_index++;
            }
            else if(ind > right_index and right_index >= left_index){
                hp.push({costs[right_index],right_index});
                right_index--;
            }
        }
        return total_cost;
    }
};