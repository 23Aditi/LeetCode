class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int prod = 1;
        int ct = 0;
        int l = 0 , r = 0;
        for(r ; r < n ; r++){
            prod*=nums[r];
            while(prod>=k && l<r){prod= prod/nums[l];l++;}
            if(prod<k){
                ct+=(r-l+1);
            }
        }
        if(ct<0){return 0;}
        return ct;
    }
};