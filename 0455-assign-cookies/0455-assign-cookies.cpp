class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int m = g.size();
        int n = s.size();
        int l=0,r=0;
        while(l<n && r<m){
            if(g[r]<=s[l]){
                r=r+1;
            }
            l=l+1;
        }
        return r;        
    }
};