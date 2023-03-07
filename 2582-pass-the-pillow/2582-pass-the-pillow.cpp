class Solution {
public:
    int passThePillow(int n, int time) {
        
    bool flag=false;//Jab false h to left to right
        int k=1;
        while(time--)
        {   if(k==1)flag=false;
            if(k==n)flag=true;
            if(flag==false)
            {
                k++;
            }
         else{
             k--;
         }
        }
        return k;
       
        
        
    }
};