class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s.size()!=goal.size())return false;
        
        int st=0,e=s.size()-1;
        if(s!=goal){
            bool flag1=false, flag2=false;
            while(st<e)
            {
              if(s[st]==goal[st])st++;
                if(s[e]==goal[e])e--;
                if(s[st]!=goal[st])flag1=true;
                if(s[e]!=goal[e])flag2=true;
                if(flag1&&flag2)break;

            }
              if(s[e]==goal[st]&&s[st]==goal[e])
              {
                  
                  swap(s[e],s[st]);
            // swap(goal[st],goal[e]);
            if(s==goal)return true;
                  
              }
            
          
        }
        
        else{
           
                vector<int>arr(26);
                for(auto i:s){
                    arr[i-'a']++;
                    if(arr[i-'a']==2)return true;}
            
        }
        return false;
    }
};