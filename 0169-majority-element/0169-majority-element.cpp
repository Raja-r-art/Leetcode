//MOORE'S VOTING ALGORITHM

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
         int count=0;
         int element =0;
         for(int i=0;i<n;i++){
            if(count==0){
                element=nums[i];
                count++;
            }else if(nums[i]==element){
                count++;
            }else{
                count--;
            }
         }
         int maxi=0;
         for(int i=0;i<n;i++){
         if(nums[i]==element){
            maxi++;
         }
         }
         if (maxi>n/2){
            return element;
         }
         return -1;
    }
};