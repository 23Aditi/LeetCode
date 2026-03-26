class RecentCounter {
    vector<int> vec;
    int start = 0;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        if(!vec.size()){
            vec.push_back(t);
            return vec.size();
        }
        vec.push_back(t);
        int n = vec.size();
        int left = t-3000;
        while(start<n && vec[start]<left){
            start++;
        }
        return n-start;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */