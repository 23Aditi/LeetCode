class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ct = 0;
        long long subct = 0;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]==0){subct++;}
            else{
                ct += ((subct)*(subct+1))/2;
                subct=0;
            }
        }
        ct += ((subct)*(subct+1))/2;
        return ct;
    }
};