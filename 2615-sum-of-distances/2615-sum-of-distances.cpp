class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>> um;
        for(int i = 0 ; i < n ; i++){
            um[nums[i]].push_back(i);
        }
        vector<long long> ans(n,0);
        for(auto p : um){
            vector<int> vec = p.second;
            long long sum = 0;
            if(vec.size()<=1){continue;}
            vector<long long> prefixSum(vec.size()+1,0);
            for(int i = 0 ; i < vec.size(); i++){
                prefixSum[i+1]=prefixSum[i]+vec[i];
            }
            for(int i = 0 ; i < vec.size(); i++){
                long long leftSum = prefixSum[i];
                long long rightSum = prefixSum[vec.size()]-prefixSum[i+1];
                long long leftCount = i;
                long long rightCount = vec.size()-i-1;
                long long left = vec[i]*leftCount - leftSum;
                long long right = rightSum - vec[i]*rightCount;
                ans[vec[i]]=left+right;
            }

            
        }
        return ans;
    }
};