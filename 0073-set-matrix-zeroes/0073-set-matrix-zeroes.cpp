class Solution {
public:
    void setzero(vector<vector<int>>& arr,int m,int n){
        int row=arr.size();
        int col=arr[0].size();
            for(int j=0;j<col;j++){
               if(arr[m][j]!=0){
                arr[m][j]=2710;
               } 
            }
               for(int i=0;i<row;i++){
             if(arr[i][n]!=0){
                arr[i][n]=2710;
               }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    setzero(matrix,i,j);
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==2710){
                    matrix[i][j]=0;
                }
            }
        }
    }
};