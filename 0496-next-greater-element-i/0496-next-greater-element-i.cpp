class Solution {
void find(int i,int j,vector<int>& nums1,vector<int>& nums2){
    int n1=nums1.size();
    int n2=nums2.size();
    for(int a=i;a<n1;a++){
        int val=nums1[a];
        for(int b=j;b<n2;b++){
           if(nums2[b]>nums1[a]){
            nums1[a]=nums2[b];
            break;
           }
        }
        if(nums1[a]==val) nums1[a]=-1;
        break;
    }
}
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
           for(int j=0;j<n2;j++){
            if(nums1[i]==nums2[j]){
                find(i,j,nums1,nums2);
                break;
            }
           }
        }
        return nums1;
    }
};