class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int l=nums[i],s=nums[i];
            for(int j=i+1;j<n;j++){
               l=max(nums[j],l);
               s=min(nums[j],s);
               sum=sum+(l-s);

            }
        }
        return sum;
    }
};