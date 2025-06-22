class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int n = intervals.size();
        for(int i = 0; i < n; i++)
        {
            if(!ans.empty() && intervals[i][0] <= ans.back()[1])
            {
                if(ans.back()[1] <= intervals[i][1])
                {
                    ans.back()[1] = intervals[i][1];
                }    
            }
            else if(ans.empty() || intervals[i][0] > ans.back()[1])
            {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};