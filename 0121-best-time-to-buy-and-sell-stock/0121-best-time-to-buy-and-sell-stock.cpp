class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int profit = 0;
        int mini = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            profit = prices[i]-mini;
            maxProfit = max(profit,maxProfit);
            mini = min(mini,prices[i]);
        }
        return maxProfit;
    }
};