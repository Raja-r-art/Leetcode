class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m=0;
        if(nums.size()==1&&nums[0]==0){
            return true;
        }
        for(int i=0;i<nums.size();i++){
            if(i>m) return false;
           m=max(m,i+nums[i]);
        
        }
        return m;
    }
};