
class Solution {
public:
    int countSegments(string s) {
        int n=s.size();
        vector<string>ans;
        string a;
        for(int i=0;i<n;i++){
            if(s[i]!=' ') {
                a.push_back(s[i]);
            }else if(s[i]==' '){
                if(!a.empty()) ans.push_back(a);
                a.clear();
            }
        }
        if(!a.empty()) ans.push_back(a);
        return ans.size();
    }
};
