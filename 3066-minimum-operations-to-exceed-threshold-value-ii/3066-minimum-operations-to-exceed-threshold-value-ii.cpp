class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> pq(nums.begin(),nums.end());
        if(pq.top()>=k){return 0;}
        int n = nums.size();
        int ct = 0;
        // 1 2 3 10 11
        // 3 4 10 11
        // 10 10 11
        while(pq.top()<k && pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            long long z = (long long)2*x + y;
            pq.push(z);
            ct++;
        }
        return ct;
    }
};