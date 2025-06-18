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
        vector<int> ans(nums.size(), 0);
        if(zero > 1) return ans;
        vector<int> prod(nums.size(), x);
        // cout << "prod\n";
        // for(auto &i : prod) {
        //     cout << i << " ";
        // }
        // cout << endl;
        // cout << "nums\n";
        // for(auto &i : nums) {
        //     cout << i << " ";
        // }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] && !zero)
                prod[i] /= nums[i];
            else if(zero){
                ans[idx] = x;
                return ans;
            }
        }
        return prod;
    }
};