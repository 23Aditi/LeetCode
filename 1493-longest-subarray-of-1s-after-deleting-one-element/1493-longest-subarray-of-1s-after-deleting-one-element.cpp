class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int one = 0;
        int count = 0, ans = 0;
        for(int j = 0 ; j < n ; j++){
            if(nums[j]){count++;}
            if(!nums[j]){one++;}
            while(one>1){
                if(!nums[i])one--;
                i++;
            }
            ans = max(ans,j-i);
        }
        return ans;
    }
};