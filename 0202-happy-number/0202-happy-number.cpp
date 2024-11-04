class Solution {
public:
    bool isHappy(int n) {
        int n1 = n;
        unordered_map<int,int> um;
        while(true){
            int num = n1;
            int sum = 0;
            while(num!=0){
                sum += (num%10)*(num%10);
                num = num/10;
            }
            if(um.find(sum)!=um.end()){
                return false;
            }
            if(sum==1){return true;}
            
            um[sum]=1;
            n1 = sum;
            
        }
        return false;
    }
};