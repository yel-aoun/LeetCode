class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            buy = std::min(buy, prices[i]);
            if (prices[i] - buy > 0){
                profit += ( prices[i] - buy);
                buy = prices[i];
            }

        }
        return profit;
    }
};