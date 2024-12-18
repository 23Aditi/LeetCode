class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> newPrices;
        for(int i = 0; i< prices.size();i++){
            int price = prices[i];
            bool flag = false;
            for(int j = i+1 ; j < prices.size();j++){
                if(prices[j]<=prices[i]){
                    newPrices.push_back(prices[i]-prices[j]);
                    flag = true;
                    break;
                }
            }
            if(!flag){newPrices.push_back(prices[i]);}
        }
        return newPrices;
    }
};