class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit=0;
        int minp=INT_MAX;
        int maxprofit=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<minp){
                minp=nums[i];
            }else{
                profit=nums[i]-minp;
              maxprofit=max(profit,maxprofit);
            }
        }
        return maxprofit;
    }
};