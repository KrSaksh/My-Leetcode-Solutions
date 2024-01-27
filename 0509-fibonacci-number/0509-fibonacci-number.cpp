class Solution {
public:
int func(vector<int> &dp, int n)
{
    if(dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = func(dp, n-1) + func(dp, n-2);
}

    int fib(int n) {
        if(n == 0)
        {
            return 0;
        }
        vector<int> dp(n+1, -1);
        dp[0] = 0;
        dp[1] = 1;
        return func(dp,n);
    }
};