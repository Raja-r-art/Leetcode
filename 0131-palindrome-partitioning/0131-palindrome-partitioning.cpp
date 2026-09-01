class Solution {
private:
bool is(int start,int end,string s){
    while(start<=end){
        if(s[start]!=s[end]) return false;
        start++;
        end--;
    }
    return true;
}
void f(int idx,string s,vector<string>& ds,vector<vector<string>>& ans){
    if(idx==s.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=idx;i<s.size();i++){
        if(is(idx,i,s)){
            ds.push_back(s.substr(idx,i-idx+1));
            f(i+1,s,ds,ans);
            ds.pop_back();
        }
    }
}
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> ds;
        f(0,s,ds,ans);
        return ans;
    }
};