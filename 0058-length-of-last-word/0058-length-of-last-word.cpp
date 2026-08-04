class Solution {
public:
    int lengthOfLastWord(string s) {
       int n=s.size();
       int i=n-1;
       while(i>=0){
        if(s[i]==' '){
            i--;
        }else{
            break;
        }
       }
       int count=0;
       while(i>=0){
        if(s[i]!=' '){
            count=count+1;
            i--;
        }else{
         break;
        }
       }
       return count;
    }
};