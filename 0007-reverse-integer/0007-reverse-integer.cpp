class Solution {
public:
    int reverse(int x) {
        long y = x;
        long rev=0;
        int s=1;
       
        if(x<0){
            s=-1;
        }
       y*=s;
        while(y>0){
            long n=y%10;
            rev=rev*10+n;
            y=y/10;
        }
         if(rev>INT_MAX || s*rev<INT_MIN) return 0;
        return s*rev;
    }
};