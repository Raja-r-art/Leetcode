class Solution {
private:
bool is(int r,int c,vector<string>& board,int n){
    int dr=r;
    int dc=c;
    while(r>=0 && c>=0){
        if(board[r][c]=='Q') return false;
        r--;
        c--;
    }
   c=dc;
   r=dr;
    while(c>=0){
        if(board[r][c]=='Q') return false;
        c--;
    }
      c=dc;
   r=dr;
    while(r<n && c>=0){
        if(board[r][c]=='Q') return false;
        r++;
        c--;
    }
    return true;
}
void f(int c, vector<string>& board, vector<vector<string>>& ans,int n){
    if(c==n){
        ans.push_back(board);
        return;
    }
    for(int r=0;r<n;r++){
        if(is(r,c,board,n)){
         board[r][c]='Q';
         f(c+1,board,ans,n);
         board[r][c]='.';
        }
    }
}
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        f(0,board,ans,n);
        return ans;
    }
};