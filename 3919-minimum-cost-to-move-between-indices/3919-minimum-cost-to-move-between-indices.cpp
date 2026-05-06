class Solution {
public:
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {   
        int n = nums.size();
        vector<int> leftToRight(n+1,0);
        // leftToRight[1] -> cost of 0 
        // leftToRight[2] -> cost of 0 + cost of 1
        vector<int> rightToLeft(n+1,0);
        for(int i = 0 ; i < n-1 ; i++){
            int cost ;
            if(i==0){cost=1;}
            else{
                int leftDiff = nums[i]-nums[i-1];
                int rightDiff = nums[i+1] - nums[i];
                if(rightDiff<leftDiff){cost=1;}
                else{cost=rightDiff;}
            }
            leftToRight[i+1]= leftToRight[i]+cost;
        }
        for(int i = n-1 ; i>0 ; i--){
            int cost ;
            if(i==n-1){cost=1;}
            else{
                int leftDiff = nums[i]-nums[i-1];
                int rightDiff = nums[i+1]-nums[i];
                if(leftDiff<=rightDiff){cost=1;}
                else{cost = leftDiff;}
            }
            rightToLeft[i-1]= rightToLeft[i]+cost;
        }
        vector<int> sol;
        for(auto q : queries){
            int x = q[0];
            int y = q[1];
            if(x<y){
                sol.push_back(leftToRight[y]-leftToRight[x]);
            }else{
                sol.push_back(rightToLeft[y]-rightToLeft[x]);
            }
        }
        return sol;
    }
};