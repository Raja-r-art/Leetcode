class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;

        for(int i=0;i<n;i++){
       char c1=s[i];
       char c2=t[i];
       if(mp1.contains(c1)){
        if(mp1[c1]!=c2) return false;
        }else mp1[c1] =c2;

        if(mp2.contains(c2)){
            if(mp2[c2]!=c1) return false;
        }else mp2[c2]=c1;
    }
    return true;
    }
};