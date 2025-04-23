class Solution {
    int sumOfDigits(int n){
        int sum = 0;
        while(n > 0){
            sum += n%10;
            n/=10;
        }
        return sum;
    }
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> um;
        int ct = 0;
        for(int i = 1 ; i <=n ; i++){
            um[sumOfDigits(i)]++;
        }
        int max_ele = INT_MIN;

        for(auto p : um){
            max_ele = max(max_ele,p.second);
        }
        for(auto p : um){
            if(p.second == max_ele){ct++;}
        }
        return ct;
    }
};