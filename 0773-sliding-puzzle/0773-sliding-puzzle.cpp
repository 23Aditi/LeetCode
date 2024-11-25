class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        // Observe : 
            // 1. The size of the board is fixed i.e 2 X 3
            // 2. The value of elements on the board is fixed i.e 0 1 2 3 4 5 (without repeation)
            // 3. Move : we can only swap 0 and that also with it's 4 directionally adjacent element
        // Conclusion : From the above data we can know all possible moves.
            // that is if '0' is that index (0,0) it can swap with element at index (0,1) or (1,0)
            // We know that the target is [[1,2,3],[4,5,0]].
        
        /*------ Code -------*/
        
        string target = "123450";  // Converting target 2D array into string 
        
        // Flattening the given board (2 D array) into a string
        string start = "";
        for(auto& row : board){
            for(auto& num : row){
                start += to_string(num); // converting int to string
            }
        }
        
        //check if start = target
        if(start == target){return 0;}
        
        // Possible Moves
        vector<vector<int>> moves = {{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}}; // In order 
        
        // BFS
        queue<pair<string,int>> q; // {current board state , no of moves}
        unordered_set<string> visited;
        
        // Initialize the BFS
        q.push({start,0});
        visited.insert(start);
        
        while(!q.empty()){
            auto [ current , step ] = q.front();
            q.pop();
            
            if(current == target){return step;} 
            
            int zeroIdx = current.find('0'); //finding index of 0
            
            for(int nextIdx : moves[zeroIdx]){
                string nextState = current;
                swap(nextState[zeroIdx], nextState[nextIdx]);
                
                if(!visited.count(nextState)){
                    q.push({nextState, step+1});
                    visited.insert(nextState);
                }
            }
        }
        return -1;
    }
};