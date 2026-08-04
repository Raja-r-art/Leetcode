class Solution {
private:
    vector<vector<int>>f(int idx,vector<int>&v,vector<int>&arr,int n){
        vector<vector<int>>t;
        if(idx>=n){
           t.push_back(v);
            return t;
        }
        v.push_back(arr[idx]);
        vector<vector<int>>a=f(idx+1,v,arr,n);
        v.pop_back();
       vector<vector<int>>b=f(idx+1,v,arr,n);
        for(int i=0;i<a.size();i++){
            t.push_back(a[i]);
        }
         for(int i=0;i<b.size();i++){
            t.push_back(b[i]);
        }
        return t;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>v;
        return f(0,v,nums,nums.size());
    }
};