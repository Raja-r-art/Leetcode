class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int last=nums[n-1];
        for(int i=0;i<n;i++){
             sum+=last-nums[i];
        }
        return sum;
    }
};