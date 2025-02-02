class Solution {
public:
    bool check(vector<int>& arr) {
        int flag = 0;
        int n = arr.size();
        for(int i = 0 ; i < n-1 ; i++){
            if(flag == 2){return false;}
            if(arr[i]>arr[i+1]){
                flag++;
            }
        }
        if(arr[0]<arr[n-1]){flag++;}
        return flag!=2;
    }
};