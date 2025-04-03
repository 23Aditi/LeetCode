class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,0),right(n,0);
        int left_max = INT_MIN , right_max = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            left[i] = left_max;
            left_max = max(left_max,nums[i]);
            right[n-1-i] = right_max;
            right_max = max(right_max,nums[n-1-i]);
            
        }
        for(int i = 0 ; i < n ; i++){
            cout << left[i] << " ";
        }
        cout << "\n";
        for(int i = 0 ; i < n ; i++){
            cout << right[i] << " ";
        }
        long long max_ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(left[i]== INT_MIN || right[i]== INT_MIN){continue;}
            max_ans = (long long) max(max_ans,(long long)(left[i]-nums[i])*right[i]);
        }
        return max_ans;
    }
};