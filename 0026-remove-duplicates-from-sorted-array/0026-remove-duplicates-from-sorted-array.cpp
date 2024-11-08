class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> um;
        int count = 0;
        for(int i=0; i<nums.size() ; ){
            um[nums[i]]++;
            if(um[nums[i]]==1){
                count ++;
                i++;
            }
                  else{
                      nums.erase(nums.begin()+i);
                  }
        }
        
        return count;
    }
};