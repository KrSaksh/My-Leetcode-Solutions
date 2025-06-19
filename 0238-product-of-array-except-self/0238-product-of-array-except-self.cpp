class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pre = 1;
        int post = 1;
        // vector<int> pre(n, 1);
        // vector<int> post(n, 1);
        vector<int> ans(n, 1);
        for(int i = 1; i < n; i++)
        {
            pre *= nums[i - 1];
            ans[i] *= pre;
            post *= nums[n - i];
            ans[n - i - 1] *= post;
        }
        return ans;
    }
};