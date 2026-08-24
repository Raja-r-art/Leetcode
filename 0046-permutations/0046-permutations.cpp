class Solution {
private:
void f(vector<int>& nums,vector<int>& ds,vector<int>& v,vector<vector<int>>& ans,int n){
    if(ds.size()==n){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<n;i++){
        if(!v[i]){
            ds.push_back(nums[i]);
            v[i]=1;
            f(nums,ds,v,ans,n);
            ds.pop_back();
            v[i]=0;
                    }
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        vector<int>ds;
        vector<vector<int>>ans;
        f(nums,ds,v,ans,n);
        return ans;
    }
};