class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result = "";
        int start = 0;
        for(int end : spaces){
            result += s.substr(start,end-start) + " ";
            start = end ;
        }
        result += s.substr(start,s.size()-start);
        return result;
    }
};