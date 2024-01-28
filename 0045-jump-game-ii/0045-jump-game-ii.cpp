#include<bits/stdc++.h>
class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int n = nums.size() - 1;
        int idx = 0; 
        int val = 0;
        if(n == 0)
        {
            return 0;
        }
        if(nums.size() == 2)
        {
            return 1;
        }

        for(int i = 0; i <= n; i++)
        {
            val = max(val, i + nums[i]);
            if(i == idx)
            {
                idx = val;
                jumps++;
            
            if(val >= n)
            {
                return jumps;
            }}
        }
        return jumps;
    }
};