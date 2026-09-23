class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            if(st.empty()){
                st.push(nums[i%n]);
            }else if(st.top()<=nums[i%n]){
                while(!st.empty() && st.top()<=nums[i%n]){
                    st.pop();
                }
                st.push(nums[i%n]);
            }else if(st.top()>nums[i%n]){
                st.push(nums[i%n]);
            }
               if(i<n){
                if(st.top()<=nums[i]){
                    while(!st.empty() && st.top()<=nums[i]){
                        st.pop();
                    }
                    if(!st.empty()){
                        ans[i]=st.top();
                        st.push(nums[i]);
                    }
                    else if(st.empty()){
                        st.push(nums[i]);
                    }
                }
            }
        }
        return ans;
    }
};