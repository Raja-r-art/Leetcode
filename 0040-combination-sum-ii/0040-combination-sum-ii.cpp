//pattern for removing the duplicates in the array using an recursion 
class Solution {
private:
void f(int idx,int t,vector<int>& nums,vector<int>& ds, vector<vector<int>>& ans){
    if(t==0) {
        ans.push_back(ds);
    }
    for(int i=idx;i<nums.size();i++){
        if(i>idx && nums[i]==nums[i-1]) continue;
        if(nums[i]>t) break;
        ds.push_back(nums[i]);
        f(i+1,t-nums[i],nums,ds,ans);
        ds.pop_back();
    }
}
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        f(0,t,nums,ds,ans);
        return ans;
    }
};