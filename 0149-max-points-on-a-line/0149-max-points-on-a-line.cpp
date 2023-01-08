class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
         int ans=0;
        // if(points.size()==1||points.size()==2)return points.size();
        unordered_map<float,int>mp;
        for(int i=0;i<points.size();i++)
        
        
        {
            for(int j=i+1;j<points.size();j++)
            { float x1=points[i][0],x2=points[j][0],y1=points[i][1],y2=points[j][1];
             
             float slope=(y2-y1)/(x2-x1);
             if((y2-y1)<0&&(x2-x1)==0)mp[abs(slope)]++;
              else{
                  mp[slope]++;
              }  
            }
              for(auto i:mp)
        {
           cout<<i.first<<' '<<i.second<<endl;
            ans=max(ans,i.second);
        }
            mp.clear();
           
        }
       
      
        return ans+1;
    }
};