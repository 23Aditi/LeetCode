class Solution {
public:
    bool canChange(string start, string target) {
        string startCheck = "";
        vector<int> startIndex;
        string targetCheck = "";
        vector<int> targetIndex;
        for(int i = 0 ; i < start.size() ; i++){
            if(start[i] != '_'){
                startCheck += start[i];
                startIndex.push_back(i);
            }
            if(target[i] != '_'){
                targetCheck += target[i];
                targetIndex.push_back(i);
            }
        }
        if(startCheck != targetCheck){return false;}
        
        for(int i = 0 ; i < startIndex.size() ;i++){
            if(startCheck[i] == 'L' && startIndex[i] < targetIndex[i]){return false;}
            if(startCheck[i] == 'R' && startIndex[i] > targetIndex[i]){return false;}
        }
        
        
        return true;
    }
    
};