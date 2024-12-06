class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> us(banned.begin(),banned.end());
        int count = 0;
        int sum = 0;
        for(int i = 1 ; i<=n ; i++){
            if(us.find(i) == us.end()){
                if(sum + i <= maxSum){
                    count++;
                    sum+=i;
                                    }
                else{return count;}
            }
        }
        return count; //loop finishes without sum exceeding max
    }
};
