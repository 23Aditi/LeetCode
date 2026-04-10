class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,0);
        stack<int> st;
        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                answer[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return answer;
    }
};