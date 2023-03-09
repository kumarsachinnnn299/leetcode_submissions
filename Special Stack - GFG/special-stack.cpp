//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
// } Driver Code Ends


// https://www.youtube.com/watch?v=QMlDCR9xyd8

//Not fully understand why this formula is used

int mine=1e5;

void push(stack<int>& s, int a){
	// Your code goes here
    if(a>=mine)
    {
        s.push(a);
    }
    else{
        s.push(2*a-mine);
        mine=a;
    }
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.size()==0;
}


int pop(stack<int>& s){
	// Your code goes here
   int temp=s.top();
   if(temp>=mine)
   {
       s.pop();
       return temp;
   }
   else{
      
       mine=2*mine-temp;
       s.pop();
        return mine;
        
   }
}

int getMin(stack<int>& s){
	// Your code goes here
	return mine;
}