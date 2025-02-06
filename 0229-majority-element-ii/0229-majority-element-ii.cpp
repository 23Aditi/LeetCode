class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        vector<int> result;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            um[nums[i]]++;
        }
        for(auto p : um){
            if(p.second>(n/3)){
                result.push_back(p.first);
            }
        }
        return result;
    }
};