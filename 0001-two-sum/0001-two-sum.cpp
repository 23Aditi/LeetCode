class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        // unordered_map<int,int> um;
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i++){
        //     um[nums[i]]=i;
        // }
        // for(int i = 0 ; i < n ; i++){
        //     if(um.find(k-nums[i])!=um.end() && um[k-nums[i]]!=i){
        //         return {i,um[k-nums[i]]};
        //     }
        // }
        // return {-1,-1};

        ////// approach 2
        int n = nums.size();
        vector<int> idx(n,0);
        for(int i = 0 ; i < (int)nums.size(); i++){
            idx[i]=i;
        }
        sort(idx.begin(),idx.end(),[&nums](auto &a , auto &b){
            return nums[a]<nums[b];
        });
        int i = 0;
        int j = nums.size()-1;
        /*
        storing idexes of nums in idx and sorting it by value in nums.
        Then using two pointer approach on idx.
        */
        while(i<j){
            if(nums[idx[i]]+nums[idx[j]]==k){return {idx[i],idx[j]};}
            else if(nums[idx[i]]+nums[idx[j]]>k){j--;}
            else{i++;}
        }
        return {-1,-1};
    }
};