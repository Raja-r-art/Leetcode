class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int value=n*n;
        int curvalue=1;
        int row=v.size();
        int col=v[0].size();
        int top=0,bottom=row-1;
        int left=0,right=col-1;
        while(left<=right&&top<=bottom){
            for(int i=left;i<=right;i++){
                if(curvalue<=value){
                    v[top][i]=curvalue;
                    curvalue++;
                }
            }
            top++;
            for(int i=top;i<=bottom;i++){
                if(curvalue<=value){
                    v[i][right]=curvalue;
                    curvalue++;
                }
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    if(curvalue<=value){
                        v[bottom][i]=curvalue;
                        curvalue++;
                    }
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    if(curvalue<=value){
                        v[i][left]=curvalue;
                        curvalue++;
                    }
                }
                left++;
            }

        }
        return v;
    }
};