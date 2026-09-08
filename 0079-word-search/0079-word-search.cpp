class Solution {
    bool f(int idx,int r,int c,vector<vector<char>>& b,string w){
        if(r<0||r>=b.size() || c<0 || c>=b[0].size()) return false;
        if(b[r][c]!=w[idx]) return false;
        if(idx==w.size()-1) return true;
        int temp=b[r][c];
        b[r][c]='.';
        if(f(idx+1,r-1,c,b,w)) return true;
        if(f(idx+1,r+1,c,b,w)) return true;
        if(f(idx+1,r,c-1,b,w)) return true;
        if(f(idx+1,r,c+1,b,w)) return true;
        b[r][c]=temp;
        return false;
    }
public:
    bool exist(vector<vector<char>>& b, string w) {
        int row=b.size();
        int col=b[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(w[0]==b[i][j]){
                    if(f(0,i,j,b,w)) return true;
                }
            }
        }
        return false;
    }
};