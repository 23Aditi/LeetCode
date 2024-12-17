class Solution {
public:
    bool static Compare(char a , char b){
        return a>b; // descending order
    }
    string repeatLimitedString(string s, int repeatLimit) {
        string result = "";
        unordered_map<char,int> um;
        vector<char> chars;
        
        for(auto c : s){
            um[c]++;
        }
        
        for(const auto& key: um){
            chars.push_back(key.first);
        }
        
        sort(chars.begin(), chars.end(), Compare);
        
        for(int i = 0 ; i < chars.size() ; i++){
            char c = chars[i];
            
            while(um[c] > 0){
                if(um[c] <= repeatLimit){
                    result.append(um[c], c);
                    um[c] = 0;
                }
                else{
                    // Add characters up to repeat limit
                    result.append(repeatLimit, c);
                    um[c] -= repeatLimit;
                    
                    // Try to add a different character to break the sequence
                    bool found = false;
                    for(int j = i + 1; j < chars.size(); j++){
                        if(um[chars[j]] > 0){
                            result += chars[j];
                            um[chars[j]]--;
                            found = true;
                            break;
                        }
                    }
                    
                    // If no other character can be added, we're done
                    if(!found){
                        break;
                    }
                }
            }
        }
        
        return result;
    }
};