class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string temp="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                temp.push_back(tolower(s[i]));
            }
        }
        int i=0,j=temp.size()-1;
        while(i<=j){
          if(temp[i]!=temp[j]){
              return false;
          }
          i++;
          j--;
        }
        return true;
    }
};