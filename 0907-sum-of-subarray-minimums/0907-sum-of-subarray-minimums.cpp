class Solution {
  void nse(vector<int>&arr ,vector<int>& next){
    int n=arr.size();
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            next[i]=n;
            st.push(i);
        }else if(!st.empty() && arr[i]<arr[st.top()]){
            while(!st.empty() && arr[i]<arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
               next[i]=n;
                st.push(i);
            }else{
                next[i]=st.top();
                st.push(i);
            }
        }else{
            next[i]=st.top();
            st.push(i);
        }
    }
  }
  void pse(vector<int>& arr,vector<int>& pre){
    int n=arr.size();
    stack<int>st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            pre[i]=-1;
            st.push(i);
        }else if(arr[i]<=arr[st.top()]){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                pre[i]=-1;
                st.push(i);
            }else{
                pre[i]=st.top();
                st.push(i);
            }
        }else{
            pre[i]=st.top();
            st.push(i);
        }

    }
  }
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>next(n);
        vector<int>pre(n);
        nse(arr,next);
        pse(arr,pre);
        long long total=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            long long l=i-pre[i];
            long long r=next[i]-i;
             total=(total+(l * r %mod)*arr[i]%mod)%mod;
        }
        return total;
    }
};