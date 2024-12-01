class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> us;
        int zeroCount = 0;

        for (int num : arr) {
            if (num == 0) {
                zeroCount++;
            }
            us.insert(num);
        }

        if (zeroCount > 1) {
            return true;
        }

        for (int num : arr) {
            if (num != 0 && (us.find(2 * num) != us.end() || (num % 2 == 0 && us.find(num / 2) != us.end()))) {
                return true;
            }
        }

        return false;
    }
};
