// MOORIE'S ALGORITHM REFER STRIVERS A2Z PLAYLIST
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c1=0,e1=2710;
        int c2=0,e2=2710;
        vector<int>v;
        for(int i=0;i<n;i++){
         if(c1==0 && nums[i]!=e2){
            c1=1;
            e1=nums[i];
         }else if(c2==0 && nums[i]!=e1){
            c2=1;
            e2=nums[i];
         }
         else if(nums[i]==e1) c1++;
         else if(nums[i]==e2) c2++;
         else c1--,c2--;
        }
        int major=n/3;
        int m1=0,m2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==e1) m1++;
            if(nums[i]==e2) m2++;
        }
        if(m1>major) v.push_back(e1);
        if(m2>major) v.push_back(e2);
        return v;
    }
};