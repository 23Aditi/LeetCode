class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>, greater<int>> pq; // min heap -> smallest on top
        for(auto x : nums){
            pq.push(x);
            if(pq.size()>k)pq.pop(); // onl
        }
        return pq.top();
    }
};