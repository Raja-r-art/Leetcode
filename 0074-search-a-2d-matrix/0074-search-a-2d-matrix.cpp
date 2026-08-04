class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int c=matrix[0].size();
       int low=0,high=n*c-1;
       
    while(low<=high){
        int mid=low+(high-low)/2;
        int row=mid/c;
        int col=mid%c;
        if(matrix[row][col]==target){
            return true;
        }else if (matrix[row][col]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
  return false;
    }
};