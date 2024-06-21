class Solution {
public:
void merge(vector<int> &nums1, vector<int> &nums2, vector<int> &temp)
{
    int m = nums1.size();
    int n = nums2.size();
    int left = 0;
    int right = 0;

    int i = 0;
    while (left < m && right < n)
    {
        if (nums1[left] <= nums2[right])
        {
            temp[i] = nums1[left];
            // temp.push_back(nums1[left]);
            left++;
        }
        else if (nums1[left] >= nums2[right])
        {
            temp[i] = nums2[right];
            // temp.push_back(nums2[right]);
            right++;
        }
        i++;
    }

    while (left < m)
    {
        temp[i] = nums1[left];
        i++;
        left++;
    }
    while (right < n)
    {
        temp[i] = nums2[right];
        i++;
        right++;
    }
}
double findMedianSortedArrays(vector<int>& nums1, vector<int> &nums2) 
{
        int m = nums1.size();
        int n = nums2.size();
        int t = m + n;
        vector<int> temp(t);
        // merge(nums1.begin(),nums1.end(), nums2.begin(), nums2.end(), temp.begin());
        merge(nums1, nums2, temp);
        // for (int i : temp)
        // {
        //     cout << i << " ";
        // }
        // cout << "\n";
        if(t%2 == 0)
        {
            double s = temp[t/2] + temp[(t/2)-1];
            // cout << s/2 << "\n";
            return s/2;
        }
        else if(t%2 != 0)
        {
            // cout << temp[(t/2)] << "\n";
            return temp[t/2];
        }
        return -1;
}
};