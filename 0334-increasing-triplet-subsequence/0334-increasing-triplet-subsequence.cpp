class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int first = INT_MAX; // the smallest no
        int second = INT_MAX; // the no just bigger than the smallest no
        if(n<3) return false;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]<=first){ // equal bez i < j and nums[i] < nums[j] so <=
                first = nums[i];
            }else if(nums[i]<=second){
                second = nums[i];
            }else{
                return true; // no is bigger than first and second 
                //a no. cann't be bigger than INT_MAX so indeed first and second r in nums
            }
        }
        return false;
    }
};