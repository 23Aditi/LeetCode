class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> result;
        int n = queries.size();
        unordered_map<int,int> hm; // ball curr 
        unordered_map<int,int> cc; //col feq
        set<int> st;
        for(int i = 0 ; i < n ; i++){
            int color = queries[i][1];
            int ball = queries[i][0];
            if(hm.find(ball) != hm.end()){
                int prev = hm[ball];
                hm[ball]=color;
                cc[prev]--;
                if(cc[prev]==0){
                    st.erase(prev);
                }
            }
            hm[ball] = color;
            cc[color]++;
            st.insert(color);
             
            result.push_back(st.size());       
        }
        return result;
    }
};