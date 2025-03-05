class Solution {
public:
    long long coloredCells(int n) {
        long long ct = 0;
        if(n==1){return n;}
        int i = 0;
        for(i = 0 ; i < n-1 ; i++){
            ct += (long long)((2*i+1)*2);
            //cout << " i " << i << " ct i " << ct;
        }
        //cout << "\n i : " << i;
        ct += (long long) (2*i + 1);
        //cout << "\n ct : " << ct;
        return ct;
    }
};