class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long giftcount = 0;
        int n = gifts.size()-1;
        priority_queue<int> pq(gifts.begin(),gifts.end());
        
        while(k-- > 0){
            int num = pq.top();
            pq.pop();
            pq.push(sqrt(num));
        }
        
        while(!pq.empty()){
            giftcount += pq.top();
            pq.pop();
        }
        
        
        return giftcount;
    }
};