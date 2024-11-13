class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long pairCount=0;
        for(int i = 0 ; i < nums.size() ; i++){
            int lowerBound = lower - nums[i];
            int upperBound = upper - nums[i];
            
            auto lowIt = lower_bound(nums.begin()+i+1,nums.end(),lowerBound);
            auto UpperIt = upper_bound(nums.begin()+i+1,nums.end(),upperBound);
            
            pairCount += (UpperIt-lowIt);
        }
        return pairCount;
    }
};