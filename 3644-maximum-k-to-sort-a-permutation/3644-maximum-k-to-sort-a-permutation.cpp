class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int k = INT_MAX;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(i!=nums[i]){
                k=k&i;
            }
        }

        return k==INT_MAX ? 0 : k;
    }
};