class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++) sum+=nums[i];
        int currSum = 0;
        int ct = 0;
        for(int i = 0 ; i < n-1 ; i++){
            currSum += nums[i];
            int right = sum-currSum;
            if((abs(currSum-right))%2==0)ct++;
        }
        return ct;
    }
};