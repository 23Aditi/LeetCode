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

    // just a thought 
    // say i have 100 then 1 
    // 99 is to be added to the subarry 
    // even if i add it till the time it is increasing 
    // i.e till 1 and 4
    // 100 100 103 6 5 
    // so still i need to fill the gap of 6 and 5
    // and even if i add in whole array 
    // still the increase is same for both 6 and 5 i.e of 99 so no difference
};