// https://www.youtube.com/watch?v=W2hhdHsGOUM
//simple questiion

class BrowserHistory {
public:
    
    vector<string>history;
    int curr;
    
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        curr=0;
    }
    
    void visit(string url) {
        history.erase(history.begin()+curr+1,history.end());
        history.push_back(url);
        curr++;
    }
    
    string back(int steps) {
        if(curr-steps<0){
            curr=0;
            return history[0];}
        curr-=steps;
        return history[curr];
       
    }
    
    string forward(int steps) {
         if(curr+steps>=history.size()){
             curr=history.size()-1;
             return history[history.size()-1];}
        curr+=steps;
        return history[curr];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */