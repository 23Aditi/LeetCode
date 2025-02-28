class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        // no of operations = target - element
        // Total no of operations = target - element1 + target - element2 +....
        // therefore, let window_size be the number of elements
        // so total no of operations = window_size * target - (element1 + element 2 +....)
        // window_size*target - sum = k ( no of operations)
        // window_size* target = sum +k 
        // (r-l+1)*target = sum + k
        // if (r-l+1)*target > sum + k then stop
        int l = 0;
        long long sum = 0;
        int max_freq = 1;
        int n = nums.size();
        for(int r = 0 ; r < n ; r++){
            sum += nums[r];
            while((long long)((r-l+1)*nums[r])>sum +k){
                sum -= nums[l];
                l++;
            }
            max_freq = max(max_freq,r-l+1);
        }
        return max_freq;

    }
};