class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long gct = 0;  //good pair count
        long long n = nums.size();
        long long len = ((n)*(n-1))/2;
        unordered_map<int,int> um;
        for(int i = 0 ; i < n ; i ++){
            um[nums[i]-i]++;
        }
        for(auto p : um){
            if(p.second>1){
                long long x = ((p.second)*(p.second-1))/2;
                gct += x;
            }
        }

        return len -gct;
        /*
        nums = [4 1 3 3]
        diff = [4 0 1 0]    //nums[i]-i
        um{
            4 : 1
            0 : 2
            1 : 1
        }
        3+2+1  (4)(3)/2 = 6 = no of pairs = n(n+1)/2
        (4,0),(4,1),(4,0),(0,1),(0,0),(1,0)
        (0,0)-> 1 good pair i.e freq in um>1
        nums = [4 1 3 3 4]
        diff = [4 0 1 0 0]
        total pairs -> 10 
        (0,0),(0,0)-> 2 good pairs . i.e 3-> 3(2)/2 -> 3 pairs
        diff = [4 0 1 0 0 0 1]
        (0,0),(0,0),(0,0),(0,0),(0,0),(0,0)-> feq = 4 -> (4)(3)/2 = 6
        (1 ,1)-> feq = 2-> (2)(1)/2-> 1 good pair 
        */
    }
};