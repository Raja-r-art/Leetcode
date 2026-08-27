class Solution {
private:
void solve(int c, vector<string>board, vector<int>& left,  vector<int>& lower, vector<int>&upper,int n,vector<vector<string>>&  ans){
    if(c==n){
    ans.push_back(board);
    return;
    }
    for(int r=0;r<n;r++){
        if(left[r] == 0 && lower[r+c] == 0 && upper[n-1+(c-r)] == 0){
            board[r][c]='Q';
            left[r]=1;
            lower[r+c]=1;
            upper[n-1+(c-r)]=1;
            solve(c+1,board,left,lower,upper,n,ans);
              board[r][c]='.';
            left[r]=0;
            lower[r+c]=0;
            upper[n-1+(c-r)]=0;
        } 
    }
}
public:
    vector<vector<string>>solveNQueens(int n) {
      vector<vector<string>>ans;
        string s(n,'.');
        vector<string>board(n);
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>left(n);
        vector<int>lower(2*n-1,0);
        vector<int>upper(2*n-1,0);
        solve(0,board,left,lower,upper,n,ans);
   return ans;
        
    }
};