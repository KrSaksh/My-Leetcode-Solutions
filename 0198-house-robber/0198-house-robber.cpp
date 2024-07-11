class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size(); 
        if(n == 1)
        {
            return nums[0];
        } 
        int prev = nums[0];
        int prev2 = 0;
        int ans;
        for(int i = 1; i < n; i++)
        {
            int two = nums[i];
            if(i > 1)
                two += prev2;
            int one = prev;
            ans = max(two, one);
            prev2 = prev;
            prev = ans;
        }
        return ans;
    }
};