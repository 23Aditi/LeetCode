class Solution {
    int climb(int n,vector<int>& dp){
        if(n==0 || n==1){return 1;}
        if(dp[n-1]==-1){
            dp[n-1]=climb(n-1,dp);
        }
        if(dp[n-2]==-1){
            dp[n-2]=climb(n-2,dp);
        }
        return dp[n-1] + dp[n-2];
    }
public:
    int climbStairs(int n) {
        if(n==0 || n==1){return 1;}
        vector<int> dp(n+1,-1);
        return climb(n,dp);
    }
};