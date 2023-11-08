//Add diagonal sum firstly then add horizontal or vertical distance

class Solution {
public:
    bool isReachableAtTime(int x1, int y1, int x2, int y2, int t) {
        if(x1==x2&&y1==y2&&t==1)return false;
        int ans=0;
        if(x2<x1)swap(x1,x2);
        if(y2<y1)swap(y1,y2);
        int diag=min(abs(x1-x2),abs(y1-y2));
        ans+=diag;
        x1+=diag;
        y1+=diag;
        ans+=(abs(x1-x2)+abs(y1-y2));
            return ans<=t;
        
        }
};