class Solution {
private:
    void rev(string &s2,int i,int j){
        while(i<j){
        swap(s2[i],s2[j]);
        i++;
        j--;
        }
    }
public:
    string reverseWords(string s) {
        int n=s.size();
       
        string s2="";
         int a=0;
         int b=n-1;
         while(s[a]==' ' || s[b]==' '){
            if(s[a]==' ') a++;
            if(s[b]==' ')b--;
         }
         
        for(int i=a;i<=b;i++){
            s2.push_back(s[i]);
            if(s[i]==' '){
                while(i+1<b && s[i+1]==' ') i++;
            }
        }
        int x=0;
        rev(s2,0,s2.size()-1);
        for(int i=0;i<s2.size();i++){
            if(s2[i]!=' '){
                continue;
            }else{
                rev(s2,x,i-1);
                x=i+1;
            }
        }
        rev(s2,x,s2.size()-1);
        return s2;

        }
};