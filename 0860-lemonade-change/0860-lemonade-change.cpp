class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c5=0,c10=0,c20=0;
        if(bills[0]!=5)return false;
        c5=1;
        for(int i=1;i<bills.size();i++)
        {
            if(bills[i]==5)c5++;
          else if(bills[i]==10)
          {
              if(c5==0)return false;
              c10++;
              c5--;
          }
            else {
                if(c5==0||(c10==0&&c5<3))return false;
                if(c10!=0)
                {
                    c20++;
                    c10--;
                    c5--;
                }
                else{
                    c20++;
                    c5-=3;
                }
            }
        }
        return true;
        
    }
};