class Solution {
public:
    bool searchMatrix(vector<vector<int>>& grid, int target) {
        int r=grid.size(),c=grid[0].size();
        int s=0,e=grid.size()-1;
        int tr=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(grid[mid][c-1]<target)
            { tr=mid;
                s=mid+1;
               
            }
            
            
            else if(grid[mid][0]>target){
                tr=mid;
                e=mid-1;
                
            }
            else{
                tr=mid;
                break;
            }
        }
        
        s=0,e=c-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(grid[tr][mid]<target)
            { 
                s=mid+1;
               
            }
            else if(grid[tr][mid]==target)return true;
            
            else{
                
                e=mid-1;
                
            }
        }
        return false;
        
        
        
        
    }
};