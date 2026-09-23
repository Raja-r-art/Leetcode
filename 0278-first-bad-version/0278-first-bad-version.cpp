// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      long long low=1;
       long long high=n;
       while(low<=high){
        long long mid=(long long)(low+high)/2;
        if(!isBadVersion(mid)){
         low=mid+1;
        }else{
            high=mid-1;
        }
       } 
       return low;
    }
};