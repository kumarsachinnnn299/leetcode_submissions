/* Approach :
gcd(nums[i], nums[j]) > 1 implies that nums[i] & nums[j] should have a common prime factor > 1. 
So, we will work on prime factors instead of finding gcd everytime.
1. Find prime factors of all numbers and store in a list 
key - array index of number
value - all prime factors of number
2. Also store reverse mapping i.e. 
key - prime factor
value - array index of number if that number has key as prime factor
3. Run dfs from any array index to mark all indexes that can be visited. 
In dfs call, if all index are marked visited -> no of connected component = 1 -> return true
else return false
Time : O(n * count of all prime factors) 
--> We are scanning two lists 
index2prime and prime2index
both list will contain n * count of all prime factor elements
Space : O(n + count of all prime factors)
*/

//https://www.youtube.com/watch?v=Rl2CWlXMI_o

class Solution {
    unordered_map<int, vector<int>> prime2index;
    unordered_map<int, vector<int>> index2prime;
public:
    // Run dfs with help of our two lists : prime2index and index2prime
	void dfs(int index, vector<int>& visitedIndex, unordered_map<int,bool>& visitedPrime){
        // if already visited this index, return
        if(visitedIndex[index] == true) return;

        // mark visited
        visitedIndex[index] = true;
    
        /* check for adjacent elements
           all elements that have a common prime factor will be adjacent elements.
           So loop through all prime factors of this number
           and then loop through all elements that have this prime factor in common */

        // loop through all prime factors of this number
        for(auto &prime : index2prime[index]){
            // already visited
            if(visitedPrime[prime] == true) 
                continue;
            // mark visited
            visitedPrime[prime] = true;
            // loop through all elements that have this prime factor in common
            for(auto &index1 : prime2index[prime]){
                // already visited, continue
                if(visitedIndex[index1] == true) continue;
                // visit via dfs
                dfs(index1, visitedIndex, visitedPrime);
            }
        }
    }

    bool canTraverseAllPairs(vector<int>& nums) {
        // find all prime factors and create two mappings
        // prime2index and index2prime
        for (int i=0; i<nums.size(); i++) {
            int temp = nums[i];
            for (int j = 2; j*j <= nums[i]; j++) {
                if (temp % j == 0) {
                    prime2index[j].push_back(i);
                    index2prime[i].push_back(j);
                    while (temp % j == 0)
                      temp /= j;
                }
            }
            // to handle case , if number has a prime factor greater than sqrt(num) 
            // Eg - 10 -> 2, 5.  5 is greater than sqrt(10) -> 3
            if (temp > 1) {
                prime2index[temp].push_back(i);
                index2prime[i].push_back(temp);
            }
        }

        // Run DFS from 0th index
        vector<int> visitedIndex(nums.size(),0);
        unordered_map<int,bool> visitedPrime;
        dfs(0, visitedIndex, visitedPrime);     

        // if no of connected comp is > 1 then return false
        for(int i=0; i<visitedIndex.size(); i++) 
            if(visitedIndex[i] == false) 
                return false;
        return true;    
    }
};