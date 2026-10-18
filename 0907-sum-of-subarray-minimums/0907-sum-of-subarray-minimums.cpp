
class Solution {
    vector<int> pse(int x, vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=x;i<n;i++){
            if(st.empty()){
                ans[i]=-1;
                st.push(i);
            }else if(arr[i]>arr[st.top()]){
                ans[i]=st.top();
                st.push(i);
            }else{
                while(!st.empty() && arr[i]<=arr[st.top()]){
                    st.pop();
                }
                if(!st.empty()){
                    ans[i]=st.top();
                    st.push(i);
                }else{
                    ans[i]=-1;
                    st.push(i);
                }
            }
        }
        return ans;
    }

    vector<int> nge(int x, vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n);
        for(int i=x;i>=0;i--){
            if(st.empty()){
                ans[i]=n;
                st.push(i);
            }else if(arr[i]<arr[st.top()]){
                while(!st.empty() && arr[i]<arr[st.top()]){
                    st.pop();
                }
                if(st.empty()){
                    ans[i]=n;
                }else{
                    ans[i]=st.top();
                }
                st.push(i);
            }else{
                ans[i]=st.top();
                st.push(i);
            }
        }
        return ans;
    }

public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long long total=0;
        int mod=1e9+7;
        vector<int> left(n), right(n);

        left=pse(0,arr);
        right=nge(n-1,arr);

        for(int i=0;i<n;i++){
            long long l=i-left[i];
            long long r=right[i]-i;
            total=(total+(l*r%mod)*arr[i]%mod)%mod;
        }
        return total;
    }
};
