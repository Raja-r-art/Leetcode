class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        int n=nums.size();
       int count=0;
       int last=INT_MIN;
       sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
          if(nums[i]-1==last){
            count++;
            last=nums[i];
          }else if(nums[i]!=last){
           count=1;
           last=nums[i];
          }
          longest=max(count,longest);
       }
        return longest;
    }
   
};