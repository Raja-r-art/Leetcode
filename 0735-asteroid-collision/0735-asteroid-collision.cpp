class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                st.push(nums[i]);
            }else{
                int x=nums[i]*-1;
                    while(!st.empty() && st.top()>0 && x > st.top()){
                        st.pop();
                    }
                    if(!st.empty() && x==st.top()){
                        st.pop();
                    }else if(st.empty() || st.top()<0){
                    st.push(nums[i]);
                }
            }
        }
        if(st.empty()) return{};
        int m=st.size();
        vector<int>ans(m);
        for(int i=m-1;i>=0;i--){
          ans[i]=st.top();
          st.pop();
        }
        return ans;
    }
};