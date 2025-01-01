class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int one_count = count(s.begin(),s.end(),'1');
        int zero_count = 0;
        int score = 0;
        for(int i = 0 ; i < n-1 ; i++){ // bez non-empty strings
            if(s[i]=='0'){
                zero_count ++;  // increasing left substring len
            }else{
                one_count--;    // decreasing right substring len
            }
            int sum = zero_count + one_count;   // len of possible substr
            score = max(score,sum); // storing max score 
        }
        return score;
    }
};