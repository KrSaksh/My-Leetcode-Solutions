class Solution {
public:
    int minBitFlips(int start, int goal) {
        int big = (start > goal) ? start : goal;
        int small = (start <= goal) ? start : goal;
        int count = 0;
        while(big)
        {
            if((big & 1) != (small & 1))
            {
                count++;
            }
            big = big >> 1;
            small = small >> 1;
        }
        return count;
    }
};