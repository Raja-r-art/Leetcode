class Solution {
    void rev(string &ans){
        int i=0;
        int j=ans.size()-1;
       while(i<=j){
        swap(ans[i],ans[j]);
        i++;
        j--;
       }
    }
public:
    string removeStars(string s) {
        stack<char>st;
        for(char c:s){
            if(c!='*'){
                st.push(c);
            }else if(!st.empty()){
                st.pop();
            }
        }
        string ans="";
        while(st.size()){
            ans+=st.top();
            st.pop();
        }
        rev(ans);
        return ans;
    }
};