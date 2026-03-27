class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        int i = 0;
        while(i<n){
            if(st.empty()){
                st.push(asteroids[i]);
                i++; continue;
            }
            int top = st.top();
            int curr = asteroids[i];
            if(abs(top)<abs(curr) && top*curr <0 && curr <0){
                st.pop();
                continue;
            }else if(abs(top)==abs(curr) && top*curr <0 && curr <0){
                st.pop();i++;
            }else if(abs(top)>abs(curr) && top*curr <0 && curr <0){
                i++;
            }
            else{
                st.push(asteroids[i]);
                i++;
            }
        }
        vector<int> result(st.size(),0);
        i = st.size()-1;
        while(!st.empty()){
            result[i]=st.top();
            i--;st.pop();
        }
        return result;
    }
};