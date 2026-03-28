class Solution {
    int BS(vector<int> &potions , int k, int l , int h,  long long  target){
        int ans = -1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(1LL*potions[mid]*k>=target){
                ans = mid;
                h = mid-1;
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(),potions.end());
        vector<int> result;
        for(int i = 0 ; i < n ; i++){
            int x = BS(potions,spells[i],0,m-1,success);
            if(x==-1){result.push_back(0);}
            else{result.push_back(m-x);}
        }
        return result;
    }
};