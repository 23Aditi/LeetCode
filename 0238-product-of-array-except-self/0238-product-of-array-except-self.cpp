class Solution {

public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // long long product = 1;
        // int n = nums.size();
        // vector<int> result(n,0);
        // int zero = 0;
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i]){product*=nums[i];}
        //     else{zero++;}
        // }
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i] && !zero){
        //         result[i]=product/nums[i];
        //     }else if(!nums[i] && zero==1){
        //         result[i]=product;
        //     }
        // }
        // return result;
        int n = nums.size();
        vector<int> result(n,1);
        int prefix = 1;
        for(int i = 0 ; i < n ; i++){
            result[i]*= prefix;
            prefix *= nums[i];
        }
        int subfix = 1;
        for(int i = n-1 ; i >=0 ; i--){
            result[i]*= subfix;
            subfix *= nums[i];
        }
        return result;
    }
};