class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int pre = 1, post = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(pre == 0) pre = 1;
            if(post == 0) post = 1;
            pre *= nums[i];
            post *= nums[nums.size() - i - 1];
            maxi = max(maxi, max(pre,post));
        }
        return maxi;
    }
};