//SOLVED USING BY THE QUICK SORT ALGORITHM
class Solution {
private:
int pivote(vector<int>&  nums,int low,int high){
    int random = low + rand() % (high - low + 1);
    swap(nums[low], nums[random]);
    int i=low,j=high;
    int p=nums[low];
    while(i<j){
       while(nums[i]<=p && i<high) i++; 
       while(nums[j]>p && j>low) j--; 
       if(i<j) swap(nums[i],nums[j]);
    }
    swap(nums[low],nums[j]);
    return j;
}
void quick(vector<int>&  nums,int low,int high){
    if(low<high){
        int part=pivote(nums,low,high);
        quick(nums,low,part-1);
        quick(nums,part+1,high);
    }
}
public:
    vector<int> sortArray(vector<int>& nums) {
       quick(nums,0,nums.size()-1);
       return nums; 
    }
};