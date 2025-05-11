class Solution {
    bool check(vector<int>& nums,int div , int threshold){
        int sum = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            sum += ceil((double)nums[i]/div);
        }
        return sum <= threshold;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(check(nums,mid,threshold)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};