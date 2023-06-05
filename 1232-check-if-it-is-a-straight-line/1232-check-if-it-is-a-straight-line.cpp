class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {
        double x1=(double)arr[0][0],x2=(double)arr[1][0],y1=(double)arr[0][1],y2=(double)arr[1][1];
        double slope=(y2-y1)/(x2-x1);
        for(int i=2;i<arr.size();i++)
        {
            double x=(double)arr[i][0],y=(double)arr[i][1];
            if(x2-x1!=0)
            {   if(x-x1==0)return false;
                if(((y-y1)/(x-x1))!=slope)return false;
            }
            else{
                if(x-x1!=0)return false;

            }
                
            
        }
        return true;
        
    }
};