class Solution {
public:
    int fn(vector<int>& nums, int index, int n, int target, int sum){
        if(index == n){
            if(sum == target) return 1;
            else return 0;
        }

        int left = fn(nums, index + 1, n, target, sum + nums[index]);
        int right = fn(nums, index + 1, n, target, sum - nums[index]);
        return left + right;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return fn(nums, 0, n, target, 0);
    }
};