class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n = pizzas.size();
        sort(pizzas.begin(),pizzas.end());
        //vector<int> eaten(0,n);
        int weightGained = 0;
        int ptr = n - 1; //pts to the last element
        int days = (n/4);
        int oddDays = 0 , evenDays = 0;
        if(days%2 == 1){
            oddDays = (days/2)+1;
            evenDays = days - oddDays;
        }else{
            evenDays = (days/2);
            oddDays = days/2;
        }
        while(oddDays != 0){
            weightGained += pizzas[ptr];
            ptr--;
            oddDays--;
        }
        while(evenDays != 0){
            ptr--;
            weightGained += pizzas[ptr];
            evenDays --;
            ptr--;
        }
        return weightGained;
    }
};