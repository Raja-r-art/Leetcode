class Solution {
    private:
    void ans(vector<int>& nums,int i,int j){
        while(i<=j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
       int low=0 ,high=n-1,mid=n-k;
       ans(nums,low,mid-1);
       ans(nums,mid,high);
       ans(nums,low,high);
    }
};