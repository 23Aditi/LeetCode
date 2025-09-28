class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1){return true;}
        vector<int> reach(n,0);
        reach[0]=1;
        for(int i = 0 ; i < n ; i++){
            int x = nums[i];
            if(reach[i]){
                for(int j = i+1 ; j<n && j <i+x+1; j++){
                    reach[j]++;
                }
            }
        }
        return reach[n-1];
    }
};