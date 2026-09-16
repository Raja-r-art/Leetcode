/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        ListNode* temp2=head;
        ListNode* dummy=new ListNode(0);
        ListNode* temp1=dummy;
        while(temp2!=NULL){
            if(mp.find(temp2->val)==mp.end()){
                ListNode* newnode=new ListNode(temp2->val);
                temp1->next=newnode;
                temp1=newnode;   
            }
            temp2=temp2->next;
        }
        return dummy->next;

    }
};