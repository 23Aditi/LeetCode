class Solution {
public:
    bool isPowerOfFour(int n) {
        while(true){
            if(n==1){return true;}
            if(n<0 || n%4!=0){
                cout << n;
                return 0; 
            }
            
            n=n/4;
        }
        return true;
    }
};