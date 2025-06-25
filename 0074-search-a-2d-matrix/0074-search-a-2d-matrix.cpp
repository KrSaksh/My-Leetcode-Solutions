class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int li = 0;
        int ri = n - 1;
        int row = -1;
        while (li <= ri) {
            int mi = li + (ri - li) / 2;
            if(matrix[mi][0] <= target && matrix[mi][m - 1] >= target)
            {
                row = mi;
                break;
            } 
            else if(matrix[mi][0] > target) ri = mi - 1; 
            else li = mi + 1; 
        }
        if(row == -1) return false;
        int low = 0;
        int high = m - 1;
        cout << row << endl;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(matrix[row][mid] == target) return true;
            else if(matrix[row][mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};