class Solution {
    
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int n = arr.size();
        int high = n - 1;
        while(low <= high){
            int mid = low + (high-low)/2 ;
            if(arr[mid]-(mid + 1)>=k){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        if(high == -1){return k;}
        return k + low;
    }
};