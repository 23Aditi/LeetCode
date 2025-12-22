class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> um;
        set<int> dupli;
        for(int i = 0 ; i < n ; i++){
            um[nums[i]]++;
            if(um[nums[i]]>1){
                dupli.insert(nums[i]);
            }    
        }
        if(!dupli.size()) return 0;
        if(nums.size()<=3) return 1;
        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            um[nums[i]]--;
            if(dupli.count(nums[i]) && um[nums[i]]<=1){
                um.erase(nums[i]);
                dupli.erase(nums[i]);
            }
            if((i+1)%3==0){
                ct++;
                if(!dupli.size()) break;
            }
        }
        return ct;
    }
};