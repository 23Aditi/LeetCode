class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        int n = boxes.size();
        for(int i = 0 ; i < n ; i++){
            int ptr = 0;
            int sum = 0;
            for(ptr ; ptr < n ; ptr++){
                if(boxes[ptr]=='1' && ptr!=i){
                    sum+= abs(ptr-i);
                }
            }
            answer.push_back(sum);
        }
        return answer;
    }
};