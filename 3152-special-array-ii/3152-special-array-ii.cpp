class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        //int n = queries.size()-1;
        vector<bool> result;
        /*for(auto query : queries){
            int x = query[0];
            int y = query[1];
            bool flag = true;
            //if(x!=0 && (nums[x-1]%2==nums[x]%2)){flag = false;}
            for(int i = x ; i <= y && (i + 1!=nums.size()) ; i++){
                if(nums[i]%2 == nums[i+1]%2){flag = false;break;}
            }
            if(x==y){flag = true;}
            result.push_back(flag);
        }*/
        /* int n = nums.size();
        unordered_set<int> us;
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            if(nums[i]%2 == nums[i+1]%2){us.insert(i);}
        }
        // 1 2 3 4 6        // 0 0 0 1
        for(auto& query : queries){
            int x = query[0];
            int y = query[1];
            bool flag = true;
            for(int i = x ; i < y ; i++){
                if(us.find(i) != us.end()){flag = false; break;}
            }
            result.push_back(flag);
        }*/
        
        int n = nums.size();
        vector<int> prefix(n - 1, 0);
    
        for (int i = 0; i < n - 1; i++) {
            prefix[i] = (nums[i] % 2 == nums[i + 1] % 2) ? 1 : 0;
        }
        
        vector<int> cumSum(n,0);
        for(int i = 1 ; i < n ; i++){
            cumSum[i] = cumSum[i-1] + prefix[i-1];
        }
        for(auto& query : queries){
            int x = query[0];
            int y = query[1];
            if(cumSum[y]-cumSum[x] > 0){
                result.push_back(false);
            }else{
                result.push_back(true);
            }
        }
        return result;
    }
};