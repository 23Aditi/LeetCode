class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> um;
        int n = nums.size();
        // product and freq
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                um[nums[i]*nums[j]]++;
            }
        }
        int ct = 0;
        for(auto p : um){
            if(p.second == 2){ct++;}
            if(p.second>2){
                int x = ((p.second)*(p.second-1))/2;
                ct+=x;
            }
        }
    //count 3 ; 3 pairs a , b ; a , c ; c, b
        return ct*8;
    }
};