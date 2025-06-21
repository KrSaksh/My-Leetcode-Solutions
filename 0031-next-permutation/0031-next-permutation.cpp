class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1)
            return;
        int left = n - 2;
        while (left >= 0 && nums[left] >= nums[left + 1]) {
            left--;
        }
        if (left < 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int tbs = n - 1;
        while (nums[tbs] <= nums[left]) {
            tbs--;
        }
        swap(nums[left], nums[tbs]);
        reverse(nums.begin() + left + 1, nums.end());
    }
};