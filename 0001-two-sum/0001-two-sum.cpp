class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
       int n= nums.size();
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
         int a =k-nums[i];
         if(mp.find(a)!=mp.end()){
            return {i,mp[a]};
         }
         mp[nums[i]]=i;
       }
       return {};
    }
};