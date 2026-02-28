class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n==0) return n;
        if(n==1) return n!=val;
        int i = 0 , j = n - 1;
        while(i<j){
            if(nums[i]!=val){i++;continue;}
            if(nums[j]==val){j--;continue;}
            swap(nums[i],nums[j]);
        }
        return j;
    }
};