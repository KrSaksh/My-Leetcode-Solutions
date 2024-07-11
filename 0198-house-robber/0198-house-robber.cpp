class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();     
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            int two = nums[i];
            if(i > 1)
                two += dp[i - 2];
            int one = dp[i - 1];
            dp[i] = max(two, one);
        }
        for(int i : dp)
        {
            cout << i << " ";
        }
        cout << endl;
        return dp[n - 1];
    }
};