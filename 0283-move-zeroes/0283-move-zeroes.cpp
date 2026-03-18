class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0; // track zeros
        for(int j = 1 ; j < n ; j++){
            if(nums[i]==0 && nums[j]!=0){swap(nums[i],nums[j]);}
            if(nums[i]!=0 && i<n)i++;
        }
    }
};