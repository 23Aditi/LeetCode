class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]%3){ct++;}
        }
        return ct;
    }
};