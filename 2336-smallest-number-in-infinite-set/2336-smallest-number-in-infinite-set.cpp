class SmallestInfiniteSet {
    vector<bool> vec;
    priority_queue<int,vector<int>,greater<int>> pq;
    
public:
    SmallestInfiniteSet() {
        for(int i = 1 ; i <=1000 ; i++){
            pq.push(i);
            vec.push_back(1);
        }
    }
    
    int popSmallest() {
        int i = pq.top();
        vec[i-1]=0;
        pq.pop();
        return i;
    }
    
    void addBack(int num) {
        if(!vec[num-1]){
            pq.push(num);
            vec[num-1]=1;
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */