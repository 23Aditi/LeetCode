class Solution {
    int sum(int n){
        int ct=0;
        int s = 0;
        for(int i = 1 ; i <=n; i++){
            if(n%i==0){s+=i;ct++;}
            if(ct>4) return -1;
        }
        if(ct<4) return -1;
        return s;
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        unordered_map<int,int> um;//store no and sum
        int n = nums.size();
        int ans=0;
        for(int i = 0 ; i < n ; i++){
            if(um.count(nums[i])){ans+=um[nums[i]];continue;}
            int s = sum(nums[i]);
            if(s==-1) continue;
            um[nums[i]]=s;
            ans+=s;
        }
        return ans;
    }
};