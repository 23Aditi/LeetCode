class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        int colour[n];
        for(int i=0;i<n ; i++){
            colour[i] = -1;
        }
        for(int i = 0; i <n ; i++){
            if(colour[i] == -1){
                if(!checkBP(graph, colour,i ,n)){
                    return false;
                }
            }
        }
        return true;
    }
    
    
    bool checkBP(vector<vector<int>>& graph, int colour[],int st,int n){
        stack<int> s;
        s.push(st);
        colour[st] = true;
        
        while(!s.empty()){
            int cv = s.top();
            s.pop();
            
            for(int i : graph[cv]){
                    if(colour[i] == -1){
                        s.push(i);
                        colour[i] = ! colour[cv];
                    }
                    else if(colour[i]== colour[cv]){
                        return false;
                    }
                
            }
        }
        return true;
        
    }
};