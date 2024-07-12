class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if(obstacleGrid[0][0] == 1)
        {
            return 0;
        }
        vector<vector<int>> grid(n, vector<int> (m));
        grid[0][0] = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == 0 && j == 0)
                {
                    continue;
                }
                if(obstacleGrid[i][j] == 1)
                {
                    grid[i][j] = 0;
                    continue;
                }
                if(i == 0)
                {
                    if(j > 0)
                    {
                        grid[i][j] = grid[i][j - 1] - obstacleGrid[i][j];
                        continue;
                    }
                }
                if(j == 0)
                {
                    if(i > 0)
                    {
                        grid[i][j] = grid[i - 1][j] - obstacleGrid[i][j];
                        continue;
                    }
                }
                grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << "\n";
        }
        return grid[n - 1][m - 1];
    }
};