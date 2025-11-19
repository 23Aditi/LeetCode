class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = INT_MIN;
        long long maxsum = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            sum = max((long long)nums[i],sum+nums[i]);
            maxsum = max(sum,maxsum);
        }
        return maxsum;
    }
};