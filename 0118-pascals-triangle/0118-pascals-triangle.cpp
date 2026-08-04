class Solution {
    vector<int> temp(int n){
        vector<int>a;
        int ans=1;
        a.push_back(ans);
        for(int i=1;i<n;i++){
         ans=ans*(n-i);
         ans=ans/i;
         a.push_back(ans);
        }
        return a;
    }
public:
    vector<vector<int>> generate(int n) {
    vector<vector<int>> pascal;
    for(int i=1;i<=n;i++){
    pascal.push_back(temp(i));
 }
 return pascal;
     }
};