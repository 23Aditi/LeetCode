class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int n = height.size();
        int j = n - 1;
        int maxArea = 0;
        while(i<j){
            int minHeight = min(height[i],height[j]);
            maxArea = max(maxArea,(j-i)*minHeight);
            if(height[i]>height[j]){j--;}
            else{i++;}
        }
        return maxArea;
    }
};