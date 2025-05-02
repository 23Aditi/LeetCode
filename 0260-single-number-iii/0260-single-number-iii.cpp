class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        int a = 0 , b = 0 , n = nums.size();
        for(int i = 0 ; i < n ; i++){
            x ^= nums[i];
        }
        int diff_bit = x & -(unsigned)x ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] & diff_bit){
                a ^= nums[i]; // it is set
            }else{
                b ^= nums[i]; // it is not set
            }
        }
        return {min(a,b),max(a,b)};
    }
};