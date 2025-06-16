class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int r= k%n;
        if(n==0 || r==0){return;}
        std::rotate(nums.begin(),nums.end()-r,nums.end());
    }
};