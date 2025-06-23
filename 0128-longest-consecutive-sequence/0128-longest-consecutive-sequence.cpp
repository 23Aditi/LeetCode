class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){return 0;}
        int ct = 0 , maxct = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < n - 1 ; i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
            if(nums[i]+1 == nums[i+1]){
                ct ++;
            }else{
                maxct = max(maxct,ct);
                ct = 0;
            }
        } 
        maxct = max(maxct,ct);
        return maxct + 1;
    }
};