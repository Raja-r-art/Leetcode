class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>>v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(v.empty()||v.back()[1]<nums[i][0]){
                v.push_back(nums[i]);
            }else{
                v.back()[1]=max(nums[i][1],v.back()[1]);
            }
        }
        return v;
    }
};