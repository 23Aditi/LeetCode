class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> um;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++) um[arr[i]]++;
        unordered_map<int,int> freq;
        for(auto p : um){
            freq[p.second]++;
            if(freq[p.second]>1){return false;}
        }
        return true;
    }
};