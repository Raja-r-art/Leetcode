class Solution {
public:
    int fn(vector<vector<int>>& grid, int m, int n, vector<vector<int>>& dp){
        if(m == 0 && n == 0) return grid[0][0];         // base case
        if(m < 0 || n < 0) return INT_MAX / 2;
        if(dp[m][n] != INT_MAX / 2) return dp[m][n];

        return dp[m][n] = grid[m][n] + min(fn(grid, m - 1, n, dp), fn(grid, m, n - 1, dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();        // row
        int n = grid[0].size();     // col
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, INT_MAX / 2));

        return fn(grid, m - 1, n - 1,dp);
    }
};