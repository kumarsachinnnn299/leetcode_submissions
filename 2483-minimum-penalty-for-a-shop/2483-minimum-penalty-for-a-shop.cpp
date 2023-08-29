//Khud kiya


class Solution {
public:
    int bestClosingTime(string s) {
        vector<pair<int,int>>a1(s.size()),a2(s.size());//<yeas,no>
        int ys=0,ns=0,ye=0,ne=0;
        for(int i=0;i<s.size();i++)
        {   if(i==0)
            {
                a1[i]={0,0};
            
          
            }
            if(i!=0)
            {
                if(s[i-1]=='Y')ys++;
                 else if(s[i-1]=='N')ns++;
            }
            if(s[s.size()-i-1]=='Y')ye++;
            else ne++;
            a1[i]={ys,ns};
            a2[s.size()-i-1]={ye,ne};
            
        }
        int f=a2[a2.size()-1].first;
        int sec=a2[a2.size()-1].second;
        a1.push_back({a1[a1.size()-1].first+f,a1[a1.size()-1].second+sec});
        
        a2.push_back({0,0});
        

        int ans=0;
        int penalty=a1[0].second+a2[0].first;
        for(int i=1;i<a1.size();i++)
        {
            if(a1[i].second+a2[i].first<penalty)
            {
                ans=i;
                penalty=a1[i].second+a2[i].first;
            }
        }
        return ans;
    }
};