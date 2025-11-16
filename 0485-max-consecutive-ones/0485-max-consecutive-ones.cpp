class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxct = 0;
        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==1){
                ct++;
            }else{
                maxct=max(ct,maxct);
                ct = 0;
            }
        }
        maxct = max(maxct,ct);
        return maxct;
    }
};