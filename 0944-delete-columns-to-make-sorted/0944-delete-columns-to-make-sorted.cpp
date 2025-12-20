class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs[0].size();
        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            int check = 0;
            for(int j = 0 ; j < strs.size()-1; j++){
                if(strs[j][i]>strs[j+1][i]){
                    check=1;break;
                }
            }
            if(check)ct++;
        }
        return ct;
        
    }
};