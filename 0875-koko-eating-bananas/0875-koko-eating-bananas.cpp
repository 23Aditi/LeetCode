class Solution {
    bool possible(vector<int> piles , int h , int k){
        long long sum = 0;
        for(int i = 0 ; i < piles.size(); i++){
            sum += ceil((double)piles[i]/k);
            if(sum>h){return false;}
        }
        return sum <= h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum = accumulate(piles.begin(),piles.end(),0LL);
        int low = 1;
        long long high = sum;
        int ans = -1;
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(possible(piles,h,mid)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};