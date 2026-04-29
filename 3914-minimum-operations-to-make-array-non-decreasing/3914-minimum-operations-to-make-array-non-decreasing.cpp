class Solution {
public:
    long long minOperations(vector<int>& nums) {
        long long res = 0;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            res+= max(0,nums[i]-nums[i+1]);
        }
        return res;
    }
    // [100, 1 , 4 , 6 ,5 ]
    // 100 - 1 => 99
    // [100 , 100 , 103 , 105 , 104]
    // 105 - 104 => 1
    // [100, 100 , 103 , 105 , 105]

    // 100 - 1 => 99 and 6 - 5 = 1
};