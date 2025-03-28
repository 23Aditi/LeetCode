class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> um;
        int max_ct = INT_MIN;
        int max_num = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            um[nums[i]]++;
            if(um[nums[i]]>max_ct){
                max_ct = max(max_ct , um[nums[i]]);
                max_num = nums[i];
            }
        }
        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==max_num){ct++;}
            if((i+1)/2 > ct){return i;}
        }
        return -1;
    }
};