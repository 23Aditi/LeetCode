class Solution {
    vector<int> vec = {0,1,5,-1,-1,2,9,-1,8,6};
    bool func(int n){
        int num = n;
        bool changing = 0;
        while(num){
            int r = num%10;
            if(vec[r]==-1)return false;
            if(vec[r]!=r) changing = true;
            num/=10;
        }
        return changing;
    }
public:
    int rotatedDigits(int n) {
        int ct = 0;
        for(int i = 1 ; i <=n ; i++){
            if(func(i)){
                ct++;
                cout << i << endl;
            }
        }
        return ct;
    }
};