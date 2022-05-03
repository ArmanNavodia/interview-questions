//problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=1;i<prices.size();i++){
            //check for the current price and previous price
            //if current price is greater than yesterdays price buy the stock yesterday
            // and sell today.
            //profit=price of today i.e sell - price of yesterday i.e buy
            if(prices[i]>prices[i-1]){
                profit+=(prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};
