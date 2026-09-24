class Solution {
public:
    int smallestIndex(vector<int>& nums) {
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(nums[i]<=9 && nums[i]==i) return i;
        else {
            int sum=0;
            int number=nums[i];
            while(number!=0){
                sum+=number%10;
                number=number/10;
            }
            if(sum==i) return i;
        }
      }  
      return -1;
    }
};