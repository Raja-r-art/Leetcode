class Solution {
private:
void comb(int idx,int t,vector<int>& v,vector<int>& nums,vector<vector<int>>& ans){

if(idx>=nums.size()){
        if(t==0){  
            ans.push_back(v);
           
           }
            return;
}
    if(nums[idx]<=t){
    v.push_back(nums[idx]);
    comb(idx,t-nums[idx],v,nums,ans);
    v.pop_back();
    }
    comb(idx+1,t,v,nums,ans);
    
}

public:
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
     vector<int>v;
     vector<vector<int>>ans;
       comb(0,t,v,nums,ans);
     return ans;
    }
};