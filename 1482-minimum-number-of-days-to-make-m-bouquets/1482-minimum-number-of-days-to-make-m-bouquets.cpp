class Solution {
    bool check(vector<int>& bloomDay , int m, int k,int x){
        int n = bloomDay.size();
        int flowers = 0;
        int bouquet = 0;
        for(int i = 0 ; i < n ; i++){
            if(bloomDay[i]<=x){
               flowers++;
               if(flowers==k){
                bouquet ++;
                flowers = 0;
               }
              
            }else{
                flowers = 0;
            }
        }
        //cout << " mid : "<< x << "   "<< bouquet << "\n";
        return bouquet >=m ;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long) m*k>n){return -1;}
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        //cout << " low "<< low << " high : "<< high << "\n";
        while(low <= high){
            int mid = low + (high-low)/2;
            bool res = check(bloomDay,m,k,mid);
            if(res){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;

    }
};