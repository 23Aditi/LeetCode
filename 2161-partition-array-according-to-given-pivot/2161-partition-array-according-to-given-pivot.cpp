class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> greater;
        vector<int> equal;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }else if(nums[i]>pivot){
                greater.push_back(nums[i]);
            }else{
                equal.push_back(nums[i]);
            }
        }
        nums.clear();
        for(auto x : less){
            nums.push_back(x);
        }
        for(auto x : equal){
            nums.push_back(x);
        }
        for(auto x : greater){
            nums.push_back(x);
        }
        return nums;
    }
};