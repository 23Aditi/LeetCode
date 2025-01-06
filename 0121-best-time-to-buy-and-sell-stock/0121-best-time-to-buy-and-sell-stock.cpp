class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprice = 0;
        for(int i = 0 ; i < n ; i++ ){
            for(int j = i+1 ; j < n; j++){
            maxprice = max(maxprice , prices[j]-prices[i]);
            }
        }
        return maxprice;
    }
};