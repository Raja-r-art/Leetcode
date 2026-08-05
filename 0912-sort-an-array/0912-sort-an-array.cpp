// SORTED USING THE MERGE SORT ALGORITHM


class Solution {
private:
void f(vector<int>& nums,int i,int j){
    if(i>=j) return;
    int mid=(i+j)/2;
    f(nums,i,mid);
    f(nums,mid+1,j);
    merge(nums,i,mid,j);

}
void merge(vector<int>& nums,int i,int mid,int j){
    int l=i;
    int r=mid+1;
    vector<int>temp;
    while(l<=mid && r<=j){
        if(nums[l]<=nums[r]){
            temp.push_back(nums[l]);
            l++;
        }else{
            temp.push_back(nums[r]);
            r++;
        }
    }
    while(l<=mid){
          temp.push_back(nums[l]);
            l++;
    }
    while(r<=j){
            temp.push_back(nums[r]);
            r++;
    }
    for(int a=i;a<=j;a++){
        nums[a]=temp[a-i];
    }
}

public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        f(nums,0,n-1);
        return nums;
    }
};