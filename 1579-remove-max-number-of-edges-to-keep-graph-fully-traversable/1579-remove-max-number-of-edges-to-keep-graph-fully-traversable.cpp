
//Disjoint set union DSU question
//Not done
// https://www.youtube.com/watch?v=dqK8Eui5E48

class DSU {
public:
int parent[100005];
int size[100005];
 DSU(){
    for(int i=0;i<100005;i++){
        size[i]=1;
        parent[i]=i;
    }

}
int findPar(int i){
    if(parent[i]==i) return i;
    return parent[i]=findPar(parent[i]);
}
void unionf(int i,int j){
    int pi=findPar(i);
    int pj=findPar(j);
    if(size[pi]>size[pj]){
        parent[pi]=pj;
        size[pj]+=size[pi];
    }
    else
    {
         parent[pj]=pi;
        size[pi]+=size[pj];
    }
}
};
class Solution {
public:

    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        DSU alice;
         DSU bob;
         int c1=n;
         int c2=n;
         int r=0;
         sort(edges.begin(),edges.end(),greater <>());
         for(int i=0;i<edges.size();i++){
             if(edges[i][0]==1){
                 if(alice.findPar(edges[i][1])!=alice.findPar(edges[i][2])){
                 alice.unionf(edges[i][1],edges[i][2]);
                 c1--;r++;
                 }
             }
             else if(edges[i][0]==2){
                 if(bob.findPar(edges[i][1])!=bob.findPar(edges[i][2])){
                 bob.unionf(edges[i][1],edges[i][2]);
                 c2--; r++;
                 }
             }
             else if(edges[i][0]==3){
                 int g=5;int h=5;
                  if(alice.findPar(edges[i][1])!=alice.findPar(edges[i][2])){
                 alice.unionf(edges[i][1],edges[i][2]);
                 c1--;g=1;
                 }
                  if(bob.findPar(edges[i][1])!=bob.findPar(edges[i][2])){
                 bob.unionf(edges[i][1],edges[i][2]);
                 h=1;
                 c2--;
                 }
                 if(h==1||g==1) r++;
             }
         }
         if(c1==1&&c2==1)
         return edges.size()-r;
         else return -1;
    }
};