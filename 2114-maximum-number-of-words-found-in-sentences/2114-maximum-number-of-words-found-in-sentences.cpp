class Solution {
public:
    int mostWordsFound(vector<string>& s) {
       int m=INT_MIN;
       int r=s.size();
       
       for(int i=0;i<r;i++){
         int cnt=1;
         int c=s[i].size();
        for(int j=0;j<c;j++){
            if(s[i][j]==' ') cnt++;
        }
        m=max(m,cnt);
       }
        return m;
    }
};