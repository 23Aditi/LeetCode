class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int split = 0;
        int n = arr.size();
        int prevMax = INT_MIN;
        for(int i = 0 ; i < n  ; i++){
            prevMax = max(prevMax , arr[i]);
            if(prevMax==i){
                /*integers in the range [0, n - 1].
                and arr is of size n*/
                split++;
            }
        }
        return split;
    }
};