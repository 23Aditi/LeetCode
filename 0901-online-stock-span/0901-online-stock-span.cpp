class StockSpanner {
public:
    vector<int> vec;
    StockSpanner() {
        
    }
    
    int next(int price) {
        vec.push_back(price);
        int n = vec.size();
        int ct = 0;
        for(int i = n-1 ; i >=0 ; i--){
            if(vec[i]<=price){ct++;}
            else{break;}
        }
        return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */