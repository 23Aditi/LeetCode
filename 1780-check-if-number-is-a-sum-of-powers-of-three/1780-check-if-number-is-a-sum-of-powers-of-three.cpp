class Solution {
public:
    bool checkPowersOfThree(int n) {
        vector<int> power;
        int j = 0;
        int fact = 0;
        while(fact <= n){
            fact = pow(3,j);
            if(fact <= n) {
                cout << " fact : " << fact ;
                power.push_back(fact);}
            j++;
        }
        auto lower = lower_bound(power.begin(),power.end(),n);
        int l = lower - power.begin() - 1;
        cout << "\n lower : " << l;

        while(n != 0 ){
            if(l<0){return false;}
            if(n-power[l]>=0){
                n -= power[l];
                l--;
            }else{
                l--;
            }
        }
        return true;
    }
};