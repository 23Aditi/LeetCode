#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> resultsArray(std::vector<int>& nums, int k) {
        std::vector<int> result;
        
       
        for (int i = 0; i <= nums.size() - k; ++i) {
           
            std::vector<int> temp(nums.begin() + i, nums.begin() + i + k);
            
            bool symbol = true;
            
            for (int j = 0; j < k - 1; ++j) {
                if (temp[j] != temp[j + 1] - 1) {
                    symbol = false;
                    break; 
                }
            }
            
            
            if (symbol) {
                result.push_back(*std::max_element(temp.begin(), temp.end()));
            } else {
                result.push_back(-1);
            }
        }
        
        return result;
    }
};
