class Solution {
    int fibHelp(int num , vector<int>& dp){
        if(num==0 || num==1){
            return num;
        }
        if(dp[num]!=-1){
            return dp[num];
        }
        dp[num] = fibHelp(num-1,dp) + fibHelp(num-2,dp);
        return dp[num];
    }
public:
    
    int fib(int num) {
        vector<int> dp(num+1,-1);
        return fibHelp(num,dp);
    }
    
};