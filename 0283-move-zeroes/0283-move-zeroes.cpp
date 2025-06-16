class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n<=1){return;}
        int slow = 0 , fast = 1;
        while(fast<n){
            if(nums[slow] != 0){
                slow ++;
            }
            if(nums[slow]==0 && nums[fast] !=0){
                swap(nums[slow],nums[fast]);
            }
            fast ++;
        }
    }
};