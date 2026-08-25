class Solution {
private:
void f(int idx,vector<int>& nums,  vector<vector<int>>& ans,int n){
    if(idx==n){
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<n;i++){
        swap(nums[idx],nums[i]);
        f(idx+1,nums,ans,n);
        swap(nums[idx],nums[i]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        f(0,nums,ans,n);
        return ans;
    }
};