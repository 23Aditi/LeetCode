class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        if(j==0){return 0;}
        int mid;
        while(i<j){
            mid = (i+j)/2;
            if(mid+1<nums.size() && nums[mid]>nums[mid+1]){j=mid;}
            else {i=mid+1;}
           // if(mid==0  && nums[mid]>nums[mid+1]){return mid;}
            //if(mid==nums.size()-1  && nums[mid]>nums[mid-1]){return mid;}
        }
        return i;
    }
};