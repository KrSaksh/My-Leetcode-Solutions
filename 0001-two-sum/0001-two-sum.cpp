class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> count;
        for(int i = 0; i < nums.size(); i++)
        {
            int search = target - nums[i];
            if(count[search] != 0)
            {
                return {count[search] - 1, i};
            }
            count[nums[i]] = i + 1;
        }
        return {};
    }
};