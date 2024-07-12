class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
        {
            return nums[0];
        }
        if(n == 2)
        {
            return max(nums[0], nums[1]);
        }
        if(n == 3)
        {
            int x = *max_element(nums.begin(), nums.end());
            return x;
        }

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        dp1[0] = nums[0];
        for(int i = 1; i < n - 1; i++)
        {
            int two = nums[i];
            if(i > 1)
            {
                two += dp1[i - 2];
            }
            int one = dp1[i - 1];
            dp1[i] = max(one, two);
        }
        dp2[1] = nums[1];
        for(int i = 2; i < n; i++)
        {
            int two = nums[i];
            if(i > 2)
            {
                two += dp2[i - 2];
            }
            int one = dp2[i - 1];
            dp2[i] = max(one, two);
            cout << two << one << endl;
        }

        cout << dp1[n-2] << " " << dp2[n - 1] << endl;
        return max(dp1[n - 2], dp2[n - 1]);
    }
};