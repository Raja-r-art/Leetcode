class Solution {
public:
    int maxDepth(string s) {
        int len=0,maxlen=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                len++;
            }else if(s[i]==')'){
                maxlen=max(len,maxlen);
                len--;
            }
        }
        return maxlen;
    }
};