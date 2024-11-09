class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        k%=length;
        if(k==0){return;}
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
    /*void rotateArray(vector<int>& nums){
        int last = nums[nums.size()-1];
        for(int i = nums.size()-1 ; i>0 ; i-- ){
            nums[i]=nums[i-1];
        }
        nums[0] = last;
    }*/
};