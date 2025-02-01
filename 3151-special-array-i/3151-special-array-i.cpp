class Solution {
public:
    bool isEven(int n){
        return n%2==0;
    }
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n - 1 ; i ++ ){
            if(isEven(nums[i])==isEven(nums[i+1])){return false;}
        }
        return true;
    }
};