class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        // int max_sum = INT_MIN;
        // for(int i = 0 ; i < n ; i++){
        //     int sum = 0;
        //     for(int j = i ; j < n ; j++){
        //         //cout << "sum : " << sum << " ";
        //         sum += nums[j];
        //         max_sum = max(max_sum,abs(sum));
        //     }
        //     //cout << " max_sum : " << max_sum ;
        // }
        int max_sum = INT_MIN;
        int min_sum = INT_MAX;
        int window_sum = 0;
        for(auto num : nums){
            window_sum += num;
            max_sum = max(max_sum , window_sum);
            if(window_sum <0){
                window_sum = 0;
            }
        }
        window_sum = 0;
        for(auto num : nums){
            window_sum += num;
            min_sum = min(min_sum , window_sum);
            if(window_sum >0){
                window_sum = 0;
            }
        }
        
        return max(max_sum,abs(min_sum));
    }
};