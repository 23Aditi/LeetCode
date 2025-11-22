class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int ct = 0;
        int j = 0;
        int len = 0;
        int maxlen = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==0){ct++;}
            len++;
            while(ct>k){
                if(nums[j]==0){
                    ct--;
                }
                len--;
                j++;
            }
            maxlen = max(maxlen,len);
        }
        return maxlen;
    }
};