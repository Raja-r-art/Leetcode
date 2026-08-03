class Solution {
    bool palin(string s,int i){
         int n=s.size();
         if (i>=n/2) return true;
         if(s[i]!=s[n-i-1]) return false;
         return palin(s,i+1);
    }
public:
    bool isPalindrome(int x) {
       string s=to_string(x);
        return palin(s,0);
    }
};