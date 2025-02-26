class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int max_product = INT_MIN;
        // int window_product = 1;
        // for(auto num:nums){
        //     window_product = window_product * num;
        //     max_product = max(max_product,window_product);
        //     if(window_product == 0){
        //         window_product = 1;
        //     }
        // }
        // int max_num = *max_element(nums.begin(),nums.end());
        // return max(max_product,max_num);
        int n = nums.size();
        int max_product = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            int window_product = 1;
            for(int j = i ; j < n ; j++){
                window_product *= nums[j];
                max_product = max(max_product , window_product);
            }
        }
        return max_product;
    }
};