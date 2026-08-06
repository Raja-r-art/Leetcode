class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<INT_MAX;i++){
            int pro=1;
            int a=i;
            while(a>0){
                pro*=a%10;
                a=a/10;
            }
            if(pro%t==0) return i;
        }
        return 0;
    }
};