class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        unordered_map<int,vector<vector<int>>> um;
        for(int i = 0 ; i < n-1 ; i++){
            um[arr[i+1]-arr[i]].push_back({arr[i],arr[i+1]});
        }
        int min_key = INT_MAX;
        for(auto p : um){
            min_key = min(min_key,p.first);
        }
        return um[min_key];
    }
};