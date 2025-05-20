class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n+1,0);
        for(auto& range : queries){
            int left = range[0];
            int right = range[1];
            diff[left]--;
            if(right + 1 < n){
                diff[right+1]++;
            }
        }

        int decrement = 0 ;
        for ( int i = 0 ; i < n ; i++){
            decrement += diff[i];  // diff ke acc value change hogi
            nums[i] += decrement;
            if(nums[i]<0){nums[i]=0;}
        }
        
    return all_of(nums.begin(),nums.end(),[](int x){ return x==0;});
    }
};