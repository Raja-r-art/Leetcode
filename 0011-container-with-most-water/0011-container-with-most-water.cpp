class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
       int i=0;
       int j =n-1;
       int maxa=INT_MIN;
       while(i<j){
        int x=j-i;
        int y=min(height[i],height[j]);
        maxa=max(maxa,x*y);
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
       } 
       return maxa;
    }
};