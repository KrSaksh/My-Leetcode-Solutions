class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n == 1 || m == 1)
        {
            return 1;
        }
        vector<vector<int>> dp(m, vector<int> (n));
        dp[0][0] = 0;
        dp[0][1] = 1;
        dp[1][0] = 1;
        // dp[1][1] = 2;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i - 1 < 0 && !(j - 1 < 0))
                {
                    dp[i][j] = 1;
                    continue;
                }
                if(j - 1 < 0 && !(i - 1 < 0))
                {
                    dp[i][j] = 1;
                    continue;
                }
                if(j - 1 < 0 && i - 1 < 0)
                {
                    dp[i][j] = 0;
                    continue;
                }
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        return dp[m - 1][n - 1];
    }
};