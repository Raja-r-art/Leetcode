class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            sum+=(abs(s[i]-'z')+1)*(i+1);
        }
        return sum;
    }
};