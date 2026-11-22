class Solution {
public:
    bool checkString(string s) {
        bool x=false;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='b') x=true;
            if(x){
                if(s[i]=='a') return false;
            }
        }
        return true;
    }
};