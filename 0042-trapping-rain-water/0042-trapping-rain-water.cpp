class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int>pm(n);
        vector<int>sm(n);
        pm[0]=nums[0];
        for(int i=1;i<n;i++){
          pm[i]=max(pm[i-1],nums[i]);
        }
        sm[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
          sm[i]=max(sm[i+1],nums[i]);
        }
        int total=0;
        for(int i=0;i<n;i++){
        if(nums[i]<pm[i] && nums[i] < sm[i]) total+=min(pm[i],sm[i])-nums[i];
        }
        return total;
    }
};