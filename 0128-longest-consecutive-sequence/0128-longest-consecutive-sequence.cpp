class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        int n=nums.size();
   unordered_set<int>st(nums.begin(),nums.end());
   for(auto it:st){
    if(st.find(it-1)==st.end()){
int val=it;
int count=1;
while(st.find(val+1)!=st.end()){
    count++;
    val=val+1;
}
longest=max(longest,count);
    }
   }
        return longest;
    }
   
};