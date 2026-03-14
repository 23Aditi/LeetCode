class Solution {
    int sumOfSqOfDigits(int n){
        int num = 0;
        while(n){
            int r = n%10;
            num += r*r;
            n = n/10;
        }
        return num;
    }
public:
    bool isHappy(int n) {
        
        int slow = sumOfSqOfDigits(n);
        int fast = sumOfSqOfDigits(sumOfSqOfDigits(n));
        while(slow != fast){
            slow = sumOfSqOfDigits(slow);
            fast = sumOfSqOfDigits(sumOfSqOfDigits(fast));
            cout << "slow : "<< slow << " fast : "<< fast << "\n";
            if(slow==1 || fast==1){return true;}
        }
        if(slow==1 || fast==1){return true;}
        return false;
    }
};