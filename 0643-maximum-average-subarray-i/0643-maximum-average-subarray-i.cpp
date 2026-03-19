class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum = INT_MIN;
        int n = nums.size();
        double sum = 0;
        int j = 0;
        while(j<k){
            sum+=nums[j];
            j++;
        }
        maxSum = max(sum,maxSum);
        int i = 0;
        for(j=k;j<n ; j++){
            sum-=nums[i];
            i++;
            sum+=nums[j];
            maxSum = max(sum,maxSum);
        }
        return maxSum/k;

        }
};