class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        vector<int> ans;
        for(int no : nums){
            um[no]++;
        }
        
        auto compare = [](pair<int,int>& a, pair<int,int>& b){ 
            return a.second>b.second;
        };
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(compare)> pq(compare);
        
        for(auto pair: um){
            pq.push(pair);
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        while(!pq.empty()){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        
        return ans;
    }
};


/*lambda fun
[ capture_clause ] ( parameters ) -> return_type {
    // function body
};

Capture Clause [ ]: This specifies which variables from the surrounding scope the lambda can access.

[] means it captures nothing.
[=] means it captures all surrounding variables by value.
[&] means it captures all surrounding variables by reference.
[x, &y] means it captures x by value and y by reference.
Parameters ( ): This part is similar to a regular function parameter list. You define the input parameters here.

Return Type -> return_type (optional): You can specify the return type after the arrow (->). C++ usually deduces this automatically, so it's often optional.

Function Body { }: This is the actual code that runs when the lambda is called.

eg :
auto add = [](int a, int b) -> int {
    return a + b;
};
int sum = add(3, 4); // sum will be 7

eg :
int multiplier = 2;
auto multiply = [multiplier](int a) {
    return a * multiplier;
};

int result = multiply(5); // result will be 10 (5 * 2)

*/