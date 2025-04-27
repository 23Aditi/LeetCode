class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ct = 0;
        for(int i = 0 ; i < n - 2 ; i++){
            double x = nums[i] + nums[i+2];
            double y = nums[i+1]/2.0;
            cout << x << " " << y << "\n";
            if(x==y){ct++;}
        }
        return ct;
    }
};