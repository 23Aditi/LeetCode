class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        while(start<end){
            int mid = start + (end - start)/2;
            if(mid%2 != 0){mid--;}  // since only 2 times a number can be repeated
            if(arr[mid]==arr[mid+1]){   //equal hai tho increment karna hai
                start = mid+2;  // increment by 2 next unique element
            }
            else{
                end = mid;  //else mid ko end ke equal kaarne ka
            }            
        }
        
        return arr[start];
    }
};