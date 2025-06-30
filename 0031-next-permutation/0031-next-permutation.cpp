class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx1 = -1;
        
        // Step 1: Find the first decreasing element from the right
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                idx1 = i;
                break;
            }
        }

        // If no such index, reverse entire array
        if(idx1 == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the element just larger than nums[idx1]
        for(int idx2 = n - 1; idx2 > idx1; idx2--){
            if(nums[idx2] > nums[idx1]){
                swap(nums[idx1], nums[idx2]);
                break;
            }
        }

        // Step 3: Reverse from idx1 + 1 to end
        reverse(nums.begin() + idx1 + 1, nums.end());
    }
};
