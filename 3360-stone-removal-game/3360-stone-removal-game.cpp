class Solution {
public:
    bool canAliceWin(int n) {
       int remove=10;
       bool a=true;
       while(n>=remove){
        n-=remove;
        remove--;
        a=!a;
       }
       return !a;
    }
};