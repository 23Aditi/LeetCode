class Solution {
    int binarySearch(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        if(target > nums[high]){return high+1;}
        if(target < nums[low]){return low;}
        while(low<=high){
            int mid = low + ( high - low )/2;
            if(nums[mid] == target){return mid;}
            else if(mid!=0 && nums[mid-1]<target && nums[mid]>target){
                return mid;
            }
            else if (nums[mid]>target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,target);
    }
};