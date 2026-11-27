class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int maxi = 0;
        stack<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int total=0;
            if(st.empty()){
                st.push(i);
            }else if(nums[i]>nums[st.top()]){
                st.push(i);
            }else if(nums[i]<=nums[st.top()]){
                while(!st.empty() && nums[i]<=nums[st.top()]){
                    int x=nums[st.top()];
                    st.pop();
                    int y=0;
                    if(st.empty()){
                        y=-1;
                    }else{
                        y=st.top();
                    }
                    total=x*(i-y-1);
                    maxi=max(maxi,total);
                }
                st.push(i);
            }
        }
        if(!st.empty()){
            int t=0;
            while(!st.empty()){
                int p=nums[st.top()];
                st.pop();
                int q=-1;
                if(!st.empty()){
                    q=st.top();
                }
                t=p*(n-q-1);
                maxi=max(maxi,t);
            }
        }
        return maxi;
    }
};