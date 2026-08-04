class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        if (nums.empty()) return ans;
        sort(nums.begin(), nums.end());
        int expected = nums[0];
        for (int x : nums) {
            while (expected < x) {
                ans.push_back(expected);
                expected++;
            }
            expected = x+1;
        }

        return ans;
    }
};