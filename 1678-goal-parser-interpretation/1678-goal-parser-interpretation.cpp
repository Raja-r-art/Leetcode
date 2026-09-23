class Solution {
public:
    string interpret(string c) {
        string ans="";
        int n=c.size();
        for(int i=0;i<n;i++){
            if(c[i]=='(' && c[i+1]==')'){
                ans+='o';
            }else if(c[i]=='(' || c[i]==')'){
             continue;
        }else{
            ans+=c[i];
        }
        }
        return ans;
    }
};