class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int ct = 0;
        int f = 0;
        for(int i = 0 ; i < n ; i++){
            if(!f && nums[i]){
                f=1;
                ct=0;
            }else if(nums[i]){
                if(ct<k)return false;
                ct=0;
            }else{
                ct++;
            }
        }
        return true;
    }
};