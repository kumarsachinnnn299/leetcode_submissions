//Not understood

class Solution {
public:
    int shortestPathAllKeys(vector<string>& grid) {
        
        int n=grid.size() , m= grid[0].size();
        unordered_map<char, int> key_bit;
        int bit_start=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(islower(grid[i][j])) key_bit[grid[i][j]]=bit_start++;
            }
        }
        int form_end=(1<<bit_start)-1 , form_size=(1<< bit_start);
        vector<vector<vector<bool>>> memo(n , vector<vector<bool>>(m, vector<bool>(form_size, false)));
        vector<int> start;
        for(int i=0 ; i<n; i++){
            for(int  j=0; j<m; j++){

                if(grid[i][j]=='@') start={i,j,0};   //0 denoting no key state

            }
        }
        queue<vector<int>>q;
        q.push(start);
        int temp=0;  //step counter
        while(!q.empty()){

            int size=q.size();
            for(int k=0 ; k<size ; k++){

                int row=q.front()[0];
                int col=q.front()[1];
                int form=q.front()[2];
                q.pop();
                if(row<0 || row>=n || col<0 || col>=m ) continue;  ///out of bounds
                if (grid[row][col]=='#') continue;    ///position is blocked or not
                if(isupper(grid[row][col])){    // Check if the key is required but not collected

                    if((form & (1<<key_bit[tolower(grid[row][col])])) == 0) continue;
                }
                if(islower(grid[row][col])) form=form | (1<<key_bit[grid[row][col]]);  // If the position contains a key, collect it
                if(form == form_end) return temp;  // If all keys are collected, return the step count
                if(memo[row][col][form]) continue; // If the position and form combination has been visited, continue to the next iteration  
                memo[row][col][form] = true;
                // Add adjacent positions to the queue
                q.push({row+1,col,form});
                q.push({row-1,col,form});
                q.push({row,col+1,form});
                q.push({row,col-1,form});

            }
            temp++;
        }
        return -1;
    }
};