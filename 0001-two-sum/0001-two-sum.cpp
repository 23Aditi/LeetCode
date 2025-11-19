class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            um[nums[i]]=i;
        }
        for(int i = 0 ; i < n ; i++){
            if(um.find(k-nums[i])!=um.end() && um[k-nums[i]]!=i){
                return {i,um[k-nums[i]]};
            }
        }
        return {-1,-1};
    }
};