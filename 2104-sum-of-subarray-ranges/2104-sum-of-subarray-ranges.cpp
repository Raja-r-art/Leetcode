class Solution {
    vector<int>previous_maximum(vector<int>& nums){
        int n=nums.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                ans[i]=-1;
                st.push(i);
            }else if(nums[i]<nums[st.top()]){
                ans[i]=st.top();
                st.push(i);
            }else if(nums[i]>=nums[st.top()]){
                while(!st.empty() && nums[i]>=nums[st.top()]){
                    st.pop();
                }
                if(st.empty()){
                    ans[i]=-1;
                }else{
                   ans[i]=st.top();
                }
                st.push(i);
            }
        }
        return ans;
    }
    vector<int>next_maximum(vector<int>& nums){
        int n=nums.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans[i]=n;
                st.push(i);
            }else if(nums[i]<nums[st.top()]){
                ans[i]=st.top();
                st.push(i);
            }else if(nums[i]>=nums[st.top()]){
                while(!st.empty() && nums[i]>nums[st.top()]){
                     st.pop();
                }
                if(st.empty()){
                    ans[i]=n;
                }else{
                    ans[i]=st.top();
                }
                st.push(i);
            }
        }
        return ans;
    }
    long long sum_of_maximum(vector<int>&nums){
        int n=nums.size();
        int mod=1e9+7;
        long long total=0;
        vector<int>pge=previous_maximum(nums);
        vector<int>nge=next_maximum(nums);
        for(int i=0;i<n;i++){
            long long left =i-pge[i];
            long long right=nge[i]-i;
            total=total+(left*right)*nums[i];
        }
        return total;
        
    }
    vector<int> previous_minimum(vector<int>& nums){
       int n=nums.size();
       vector<int>ans(n);
       stack<int>st;
       for(int i=0;i<n;i++){
          if (st.empty()){
            ans[i]=-1;
            st.push(i);
          }else if(nums[i]>nums[st.top()]){
            ans[i]=st.top();
            st.push(i);
          }else if(nums[i]<=nums[st.top()]){
           while(!st.empty() && nums[i]<=nums[st.top()]){
            st.pop();
           }
           if(st.empty()){
            ans[i]=-1;
           }else{
            ans[i]=st.top();
           }
           st.push(i);
          }
       }
       return ans;
    }
    vector<int> next_minimum(vector<int>& nums){
     int n=nums.size();
     vector<int>ans(n);
     stack<int>st;
     for(int i=n-1;i>=0;i--){
        if(st.empty()){
            ans[i]=n;
            st.push(i);
        }else if(nums[i]>nums[st.top()]){
            ans[i]=st.top();
            st.push(i);
        }else if(nums[i]<=nums[st.top()]){
            while(!st.empty() && nums[i]<nums[st.top()]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=n;
            }else{
                ans[i]=st.top();
            }
            st.push(i);
        }
     }
     return ans;
    }
  long long sum_of_minimum(vector<int>& nums){
        int n=nums.size();
        long long total=0;
        vector<int>pse=previous_minimum(nums);
        vector<int>nse=next_minimum(nums);
        for(int i=0;i<n;i++){
          long long left=i-pse[i];
          long long right=nse[i]-i;
          total=total+(right*left)*nums[i];
        }
        return total;
    }
public:
    long long subArrayRanges(vector<int>& nums) {
        return sum_of_maximum(nums)-sum_of_minimum(nums);
    }
};