class Solution {
    int climbCost(vector<int>& cost, int n,vector<int>& dp) {
        
        if (n < 0) return 0;
        if (n == 0 || n == 1) return cost[n];
        if(dp[n-1]==-1){
            dp[n-1]=climbCost(cost,n-1,dp);
        }
        if(dp[n-2]==-1){
            dp[n-2]=climbCost(cost,n-2,dp);
        }
        return cost[n] + min(dp[n-1],dp[n-2]);
    }

public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        // The final position is after the last step, so we're calculating
        // the minimum cost to reach position n from either n-1 or n-2
        return min(climbCost(cost, n-1,dp), climbCost(cost, n-2,dp));
    }
};