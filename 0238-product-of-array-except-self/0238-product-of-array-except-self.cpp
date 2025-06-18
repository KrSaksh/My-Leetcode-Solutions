class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int x = 1;
        int zero = 0;
        int idx;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i])
                x *= nums[i];
            else{
                idx = i;
                zero++;
            }
        }
        if(zero) {
            vector<int> ans(nums.size(), 0);
            if(zero > 1)
                return ans;
            else {
                ans[idx] = x;
                return ans;
            }
        }
        vector<int> prod(nums.size(), x);
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] && !zero)
                prod[i] /= nums[i];
        }
        return prod;
    }
};