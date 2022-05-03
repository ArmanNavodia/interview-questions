//problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int minPrice=INT_MAX;
        for(int currprice: prices){
            if(currprice<minPrice){
                minPrice=currprice;
            }
            int currProfit=currprice-minPrice;
            ans=max(ans,currProfit);
        }
        return ans;
    }
};
