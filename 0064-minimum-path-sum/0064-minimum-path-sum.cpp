class Solution {
public:
    int helper(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i>=n || j>=m){
            return INT_MAX;
        }
        if(i==n-1 && j==m-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int ans1=helper(i+1,j,n,m,grid,dp);
        int ans2=helper(i,j+1,n,m,grid,dp);
        return dp[i][j]=grid[i][j]+min(ans1,ans2);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return helper(0,0,n,m,grid,dp);
    }
};