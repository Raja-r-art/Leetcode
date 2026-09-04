class Solution {
    private:
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& path,
    int total,int r,int c){
        if(grid[i][j]==2 ){
        
          return total==0;
        }
        int ans=0;
        //Down
        if(i+1<r && !path[i+1][j] && grid[i+1][j]!=-1){
            path[i+1][j]=1;
         ans+=   f(i+1,j,grid,path,total-(grid[i+1][j]==0),r,c);
            path[i+1][j]=0;
        }
        //left
        if(j-1>=0 && !path[i][j-1] && grid[i][j-1]!=-1){
            path[i][j-1]=1;
          ans+=  f(i,j-1,grid,path,total-(grid[i][j-1]==0),r,c);
            path[i][j-1]=0;
        }
        //right
        if(j+1<c && !path[i][j+1] && grid[i][j+1]!=-1){
            path[i][j+1]=1;
          ans+=  f(i,j+1,grid,path,total-(grid[i][j+1]==0),r,c);
            path[i][j+1]=0;
        }

        //upward
          if(i-1>=0 && !path[i-1][j] && grid[i-1][j]!=-1 ){
            path[i-1][j]=1;
            ans+=f(i-1,j,grid,path,total-(grid[i-1][j]==0),r,c);
            path[i-1][j]=0;
        }
        return ans;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
       
        int total=0;
        int r=grid.size();
        int c=grid[0].size();
        int a,b;
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]==0){
                 total++;
                 }
            else if(grid[i][j]==1){
                a=i;
                b=j;
            }
        }
        }
        vector<vector<int>>path(r,vector<int>(c,0));
        path[a][b]=1;
       return f(a,b,grid,path,total,r,c);
       
    }
};