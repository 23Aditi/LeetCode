class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> result(n+1,0);
        int maxi = 0;
        for(int i = 1 ; i <= n ; i++){
            result[i]=gain[i-1]+result[i-1];
            maxi = max(maxi,result[i]);
        }
        return maxi;
    }
};