class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        long long result = dividend / divisor;
        if (result > INT_MAX)
            return INT_MAX;
        if(result < INT_MIN)
            return INT_MIN;
        return result;
    }
};