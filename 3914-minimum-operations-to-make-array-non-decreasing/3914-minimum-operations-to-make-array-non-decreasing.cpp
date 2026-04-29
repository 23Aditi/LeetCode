class Solution {
public:
    long long minOperations(vector<int>& nums) {
        long long res = 0;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            res+= max(0,nums[i]-nums[i+1]);
        }
        return res;
    }
};