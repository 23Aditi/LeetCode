class Solution {
    bool checkPrime(int n){
        //int flag = true;
        if(n==1){return false;}
        for(int i = 2 ; i*i <= n ; i++){
            if(n%i == 0){return false;}
        }
        return true;
    }
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        for(int i = left ; i<= right ; i++){
            if(checkPrime(i)) primes.push_back(i);
        }
        vector<int> result = {-1,-1};
        int n = primes.size();
        int min_num = INT_MAX;
        for(int i = 1 ; i < n ; i++){
            if(primes[i]-primes[i-1]<min_num){
                min_num = primes[i]-primes[i-1];
                result = {primes[i-1],primes[i]};
            }
        }
        return result;
    }
};