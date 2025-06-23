class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> count;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                count[grid[i][j]]++;
            }
        }
        for(auto &i : count) cout << i.first << " " << i.second << endl;
        int a, b;
        for(int i = 1; i <= n*n; i++)
        {
            if(count[i] > 1) a = i;
            if(count[i] == 0) b = i;
        }
        return {a,b};
    }
};