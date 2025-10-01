class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        if(!nums.size()){return res;}
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]>=target){
                high = mid -1;
            }else{
                low = mid + 1;
            }
            if(nums[mid]==target){
                res[0]=mid;
            }
        }
        low = res[0];
        high = nums.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]<=target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
            if(nums[mid]==target){
                res[1]=mid;
            }
        }
        return res;
    }
};