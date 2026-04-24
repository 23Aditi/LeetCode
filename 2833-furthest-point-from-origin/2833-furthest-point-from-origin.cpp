class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int ctL = count(moves.begin(),moves.end(),'L');
        int ctR = count(moves.begin(),moves.end(),'R');
        int ct_ = count(moves.begin(),moves.end(),'_');
        if(!ctL && !ctR){return ct_;}
        if(!ctL){return ct_+ctR;}
        if(!ctR){return ct_+ctL;}
        int ct = 0;
        char c = ctL>ctR?'L':'R';
        for(int i = 0 ; i < n ; i++){
            if(moves[i]=='L'){ct--;}
            else if(moves[i]=='R'){ct++;}
            else if(c=='L'){ct--;}
            else{ct++;}
        }
        return abs(ct);
    }
};