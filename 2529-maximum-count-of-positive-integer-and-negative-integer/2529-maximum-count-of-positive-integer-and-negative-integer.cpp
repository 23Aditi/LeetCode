class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive = 0 , negative = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i]>0){positive++;}
            if(nums[i]<0){negative++;}
        }
        return max(positive,negative);
    }
};