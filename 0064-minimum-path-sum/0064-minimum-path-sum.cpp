class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int sum = 0;
        if(n == 1)
        {
            for(int i = 0; i < m; i++)
            {
                sum += grid[0][i];
            }
            return sum;
        }
        vector<vector<int>> dp(n, vector<int> (m));
        dp[0][0] = grid[0][0];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i != 0 && j != 0)
                {
                    dp[i][j] = min(dp[max(0,i - 1)][j], dp[i][max(0,j - 1)]) + grid[i][j];
                }
                else if(i == 0 && j != 0)
                {
                    dp[i][j] = dp[i][j - 1] + grid[i][j];
                }
                else if(i != 0 && j == 0)
                {
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                }
            }
        }
        return dp[max(0, n - 1)][max(0, m - 1)];
    }
};