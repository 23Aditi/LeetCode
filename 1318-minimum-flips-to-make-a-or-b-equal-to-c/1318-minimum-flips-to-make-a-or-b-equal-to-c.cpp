class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ct = 0;
        while(a || b || c){
            if(a&1 && b&1 && !(c&1)){ct+=2;}
            else if((a&1 || b&1) && !(c&1) ){ct++;}
            if(!(a&1) && !(b&1) && c&1){ct++;}
            a = a>>1;
            b = b>>1;
            c = c>>1;
        }
        cout << a << "   " << b;
        return ct;

    }
};