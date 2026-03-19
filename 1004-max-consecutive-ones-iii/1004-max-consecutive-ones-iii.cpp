class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int zeroCount = 0;
        int i = 0;
        int ans = 0;
        for(int j = 0 ; j < n ; j++){
            if(nums[j]==0) zeroCount++;
            if(zeroCount >= k ){
                while(zeroCount>k){
                    if(nums[i]==0){zeroCount--;}
                    i++;
                }
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};