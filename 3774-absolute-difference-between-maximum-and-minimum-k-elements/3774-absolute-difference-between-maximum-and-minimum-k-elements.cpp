class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int largest = 0 , smallest = 0;
        int n = nums.size();
        for(int i = n-1 ; i >= 0 && i >= n-k ; i--) largest+=nums[i];
        for(int i = 0 ; i < k ; i++) smallest+=nums[i];
        return largest-smallest;
    }
};