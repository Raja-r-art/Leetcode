class Solution {
    private:
    void f(int idx,vector<int>& ds, vector<vector<int>>& ans,vector<int>& nums,int n){
     
        ans.push_back(ds);
        for(int i=idx;i<n;i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            f(i+1,ds,ans,nums,n);
            ds.pop_back();
        }
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        f(0,ds,ans,nums,nums.size());
        return ans;

    }
};