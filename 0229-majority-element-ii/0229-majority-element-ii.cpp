class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ans1 = 0, ans2 = 1, count1 = 0, count2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == ans1) count1++;
            else if(nums[i] == ans2) count2++;
            else if(count1 == 0) {
                ans1 = nums[i];
                count1++;
            }
            else if(count2 == 0) {
                ans2 = nums[i];
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }
        cout << count1 << " " << count2 << endl;
        count1 = count2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == ans1) count1++;
            else if(nums[i] == ans2) count2++;
        }
        vector<int> ans;
        if(count1 > nums.size()/3) ans.push_back(ans1);
        if(count2 > nums.size()/3) ans.push_back(ans2);
        return ans;
    }
};