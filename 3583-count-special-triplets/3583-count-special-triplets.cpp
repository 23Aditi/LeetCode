class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int n = nums.size();
        long long mod = 1000000007;
        unordered_map<int,int> nextFreq,prevFreq;
        for(int i = 0 ; i < n ; i++){
            nextFreq[nums[i]]++;
        }
        long long ct = 0;
        for(int i = 0 ; i < n ; i++){
            int x = nums[i]*2LL;
            if(x==nums[i]){nextFreq[x]--;}
            if(prevFreq.find(x)!=prevFreq.end() && nextFreq.find(x)!=nextFreq.end()){
                ct = (ct + (prevFreq[x]*1LL*nextFreq[x])%mod)%mod;
            }
            prevFreq[nums[i]]++;
            if(x!=nums[i])nextFreq[nums[i]]--;
            if(nextFreq[nums[i]]<0){
                nextFreq.erase(nums[i]);
            }

        }
        return ct;
    }
};