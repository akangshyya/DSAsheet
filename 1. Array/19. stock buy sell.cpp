//You are given an array prices where prices[i] is the price of a given stock on the ith day.
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future
//to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

int minPrice = prices[0];
int maxProfit = 0;

for (int i = 1; i < prices.size(); i++) {
    minPrice = min(minPrice, prices[i]);            // Update min price so far
    maxProfit = max(maxProfit, prices[i] - minPrice); // Update max profit
}

return maxProfit;
