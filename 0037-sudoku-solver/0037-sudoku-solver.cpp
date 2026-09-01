class Solution {
public:
    void solveSudoku(vector<vector<char>>& b) {
        solve(b);
      }
bool is(int row,int col,int value,vector<vector<char>>& b){
    int n=b.size();
    for(int i=0;i<n;i++){
        if(b[row][i]==value) return false;
        if(b[i][col]==value) return false;
        if(b[3*(row/3)+i/3][3*(col/3)+i%3]==value) return false;
    }
    return true;

}
bool solve(vector<vector<char>>& b){
    int row=b.size();
    int col=b[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(b[i][j]=='.'){
                for(int k='1';k<='9';k++){
                    if(is(i,j,k,b)){
                        b[i][j]=k;
                       if(solve(b)){
                         return true;
                       }else{ 
                       b[i][j]='.'; 
                       }
                }
                }
                return false;
            }
        }
    }
    return true;
}
};