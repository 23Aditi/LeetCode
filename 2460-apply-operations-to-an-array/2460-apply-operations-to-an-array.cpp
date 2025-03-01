class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i= 0 ; i < n-1 ; i++){
            if(nums[i]==nums[i+1]){
                nums[i] = nums[i]*2;
                nums[i+1]=0;
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==0){
                int j = i+1;
                while(j<n && nums[j]==0){
                    j++;
                }
                if(j<n) swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};