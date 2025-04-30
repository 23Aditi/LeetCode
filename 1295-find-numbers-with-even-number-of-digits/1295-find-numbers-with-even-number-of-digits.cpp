class Solution {
    int countDigit(int n){
        int ct = 0;
        while(n>0){
            n = n/10;
            ct++;
        }
        cout << ct << "  ";
        return ct;
    }
public:
    int findNumbers(vector<int>& nums) {
        int ct = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(!(countDigit(nums[i])&1)){ct++;}
        }
        return ct;
    }
};