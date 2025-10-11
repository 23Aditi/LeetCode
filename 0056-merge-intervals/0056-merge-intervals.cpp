class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans = {{intervals[0][0],intervals[0][1]}};
        for(int i = 1 ; i < intervals.size(); i++){
            int n = ans.size();
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(start<=ans[n-1][1] && end>ans[n-1][1]){
                ans[n-1][1]=end;
            }else if(start>ans[n-1][1]){
                ans.push_back({start,end});
            }
        }
        return ans;
    }
};