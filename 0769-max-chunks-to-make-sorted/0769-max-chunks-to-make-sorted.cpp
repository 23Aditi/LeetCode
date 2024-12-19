class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int split = 0;
        int n = arr.size();
        int prevMax = INT_MIN;
        for(int i = 0 ; i < n  ; i++){
            prevMax = max(prevMax , arr[i]);
            if(prevMax==i){
                split++;
            }
        }
        return split;
    }
};