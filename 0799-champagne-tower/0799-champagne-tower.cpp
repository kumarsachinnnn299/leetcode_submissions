//Pascals triangle

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
            if(poured==0)return 0;
       vector<double>arr;
        arr.push_back(poured);
        while(query_row--)
        {
            vector<double>temp;
            temp.push_back(max(double(0),(arr[0]-1)/2));
                           for(int i=1;i<arr.size();i++)
                           {
                               temp.push_back(max(double(0),(arr[i-1]-1)/2)+max((arr[i]-1)/2,double(0)));
                           }
                           temp.push_back(temp[0]);
                           arr=temp;
            
        } 
                           return min  (double(1),arr[query_glass]);
        
        
    }
};