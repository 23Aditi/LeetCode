class Solution {
public:
    bool check(vector<int>& nums) {
        int flag = 0;
        int n = nums.size();
        if(n<=1){return true;}
        else{
            flag += nums[0]<nums[n-1];
        }
        for(int i = 0 ; i < n - 1 ; i++){
            if(nums[i]>nums[i+1]){
                flag ++;
            }
            if(flag>=2){return false;}
        }
            return true;
    }
};