class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n = numBottles;
        int drink = n;
        int empty = n;
        while(empty>=numExchange){
            drink += empty/numExchange;
            empty = ((empty/numExchange)+(empty%numExchange));
        }
        return drink;
    }
};