class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_sum = INT_MIN;
        int n = nums.size();
        int window_sum = 0;
        int sum = 0;
        for(auto num : nums){
            sum += num;
            window_sum += num;
            max_sum = max(window_sum,max_sum);
            if(window_sum < 0){
                window_sum = 0;
            }
            cout << " max sum : " << max_sum ;
        }
        int min_sum = INT_MAX;
        window_sum = 0;
        for(auto num : nums){
            window_sum += num;
            min_sum = min(window_sum,min_sum);
            if(window_sum > 0){
                window_sum = 0;
            }
        }
        int ms = max(max_sum,sum-min_sum);
        int max_num = *max_element(nums.begin(),nums.end());
        return ms==0 ? max_num : ms;
    }
};