class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ct = 0;
        int n1 = flowerbed.size();
        if(!flowerbed[0] && n1>1 && !flowerbed[1]){flowerbed[0]=1;ct++;}
        if(n1==1 && flowerbed[0]==0 && n==1){return true;}
        for(int i = 1 ; i < n1-1 ; i++){
            if(!flowerbed[i] && !flowerbed[i-1] && !flowerbed[i+1]){
                flowerbed[i]=1;ct++;
            }
        }
        if(!flowerbed[n1-1] && n1>1 && !flowerbed[n1-2]){ct++;}
        return ct>=n;
    }
};