class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        int buy = prices[0];
        for(int i = 1; i < prices.length; i++){
            buy = Math.min(buy, prices[i]);
            System.out.println(buy);
            if (prices[i] - buy > 0){
                profit += ( prices[i] - buy);
                buy = prices[i];
            }

        }
        return profit;
    }
}