class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0 , j = 0 , ct = 0 , max_len = INT_MIN;
        while(j < n){
            if(nums[j] == 0){
                ct++;
                while(ct>k){
                    if(nums[i]==0){
                        ct--;
                    }
                    i++;
                }
            }
            max_len = max(max_len,j-i+1);
            j++;
        }
        return max_len < 0 ? 0 : max_len;
    }
};