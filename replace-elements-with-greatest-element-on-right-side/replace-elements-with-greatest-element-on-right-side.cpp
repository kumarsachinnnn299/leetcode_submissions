class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size()-1;
        stack<int>st;
        st.push(arr[n]);
        arr[n]=-1;
        for(int i=n-1;i>=0;i--)
        {   
            int temp=st.top();
            if(st.top()<arr[i]){
                st.push(arr[i]);
            }
            arr[i]=temp;
        }
        return arr;
    }
};