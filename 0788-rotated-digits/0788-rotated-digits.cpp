class Solution {
    vector<int> vec={0,0,1,-1,-1,1,1,-1,0,1};
public:
    int rotatedDigits(int n) {
        vector<int> dp(n+1,0);
        int ct = 0;
        for(int i = 1 ; i <= n ; i++){
            int prefix = i/10;
            int last = i%10;
            // dp[i]=0 -> unchangable , dp[i]=-1 -> invalid and dp[i]=1 for changable
            if(dp[prefix]==-1 || vec[last]==-1){
                dp[i]=-1; // 33 , 31 , 41 , 42
            }
            else if(dp[prefix]==1 || vec[last]==1){
                dp[i]=1;
                ct++;
            }else{
                dp[i]=0;
            }
        }
        return ct;
    }
};