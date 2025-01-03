class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long totalSum = 0, leftSum = 0;
        int count = 0, n = nums.size();
        
        // Compute total sum of the array
        for (int num : nums) {
            totalSum += num;
        }
        
        // Iterate through the array
        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
            long long rightSum = totalSum - leftSum;
            if (leftSum >= rightSum) {
                count++;
            }
        }
        
        return count;
    }
};