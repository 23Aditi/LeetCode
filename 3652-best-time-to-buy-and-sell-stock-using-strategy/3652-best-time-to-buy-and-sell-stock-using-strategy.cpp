class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();
        long long maxProfit = 0;
        vector<long long> prefixSum(n+1,0);
        vector<long long> prefixProfit(n+1,0);
        for(int i = 0 ; i < n ; i++){
            prefixSum[i+1]= prefixSum[i] + prices[i]*1LL*strategy[i];
            prefixProfit[i+1]= prefixProfit[i]+prices[i];
        }
        int half = k/2;
        maxProfit = prefixSum[n];
        long long delta = 0;
        for(int i = 0 ; i + k <= n ; i++){
            int mid = i+half;
            int end = i+k;
            long long original = prefixSum[end]-prefixSum[i]; // entire k length segment
            long long modified = prefixProfit[end]-prefixProfit[mid]; // the values becoming 1
            delta = max(delta,modified-original); // older value removed and newer values added
        }
        return maxProfit+delta; // profit without operation + if increase 
    }
};