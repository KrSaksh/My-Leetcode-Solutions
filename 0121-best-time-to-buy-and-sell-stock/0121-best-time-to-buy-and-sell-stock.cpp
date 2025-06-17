class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int profit = 0;
        while(sell < prices.size())
        {
            if(prices[buy] > prices[sell])
            {
                buy = sell;
            }
            int curr = prices[sell] - prices[buy];
            profit = max(curr, profit);
            sell++;
        }
        return profit;
    }
};