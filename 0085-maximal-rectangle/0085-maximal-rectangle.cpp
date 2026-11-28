class Solution {
public:
    int maxArea(vector<vector<int>>& nums,int row){
        int n=nums[0].size();
        stack<int>st;
        int maxi=0;
        for(int i=0;i<n;i++){
            int total=0;
            if(st.empty()){
                st.push(i);
            }else if(nums[row][i]>nums[row][st.top()]){
                st.push(i);
            }else if(nums[row][i]<=nums[row][st.top()]){
                while(!st.empty() && nums[row][i]<=nums[row][st.top()]){
                    int x=nums[row][st.top()];
                    st.pop();
                    int y=0;
                    if(st.empty()){
                        y=-1;
                    }else{
                        y=st.top();
                    }
                    total=x*(i-y-1);
                    maxi=max(total,maxi);
                }
                st.push(i);
            }
        }
        int t=0;
        while(!st.empty()){
          int p=nums[row][st.top()];
          st.pop();
          int q=-1;
          if(!st.empty()){
             q=st.top();
          }
           t=p*(n-q-1);
           maxi=max(t,maxi);
          
        }
        return maxi;

    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>prearray(row,vector<int>(col,0));
        for(int i=0;i<col;i++){
            int sum=0;
            for(int j=0;j<row;j++){
                if(matrix[j][i]=='0'){
                    sum=0;
                    prearray[j][i]=sum;
                }else{
                    sum+=1;
                    prearray[j][i]=sum;
                }
            }
        } 
        int maxi=0;
        for(int i=0;i<row;i++){
            maxi=max(maxi,maxArea(prearray,i));
        }
        return maxi;
    }
};