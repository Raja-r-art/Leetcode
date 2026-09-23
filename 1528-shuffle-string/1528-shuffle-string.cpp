class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        string ans(ind.size(),' ');
        for(int i=0;i<ind.size();i++){
            ans[ind[i]]=s[i];
        }
        return ans;
    }
};