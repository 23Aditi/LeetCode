class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int n = height.size();
        int j = n - 1;
        int area = 0;
        while(i<j){
            area = max(area,min(height[i],height[j])*(j-i));
            if(height[i]<height[j]){i++;}
            else{j--;}
        }
        return area;
    }
};