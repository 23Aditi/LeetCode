class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto& v: matrix){
            if(v[0]<=target && v[v.size()-1]>=target){
                return binarySearch(v,target);
            }
        }
        return false;
    }
    bool binarySearch(vector<int>& v,int target){
        int start = 0;
        int end = v.size()-1;
        sort(v.begin(),v.end());
        while(start<=end){
            int mid = start + (end-start)/2;
            if(v[mid]==target){
                return true;
            }
            if(v[mid]>target){ // 1 2 3 4 5 6
                end = mid-1;
            }else{
                start = mid + 1;
            }
        }
        return false;
    }
};