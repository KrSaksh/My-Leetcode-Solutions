class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 0;
        int hi = arr.size() - 1;
        int ans = -1;
        while (lo <= hi) 
        {
            int mid = hi - (hi - lo) / 2;
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) 
            {
                return ans = mid;
            } 
            else 
            {
                if (arr[mid] > arr[mid + 1]) 
                {
                    hi = mid - 1;
                }
                if(arr[mid] > arr[mid - 1])
                {
                    lo = mid + 1;
                }
            }
        }
        return ans;
    }
};