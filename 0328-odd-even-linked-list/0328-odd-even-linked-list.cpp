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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int>evennum;
        vector<int>oddnum;
        ListNode* odd=head;
        ListNode* even=head->next;
        while(odd!=NULL){
            oddnum.push_back(odd->val);
            if(odd->next!=NULL){
                odd =odd->next->next;
            }else{
                odd=NULL;
            }
        }
        while(even!=NULL){
            evennum.push_back(even->val);
            if(even->next!=NULL){
                even =even->next->next;
            }else{
                even=NULL;
            }
        }
        ListNode*temp=new ListNode(0);
        ListNode*tail=temp;
        for(int i=0;i<oddnum.size();i++){
            ListNode* newnode=new ListNode(oddnum[i]);
            tail->next=newnode;
            tail=tail->next;
        }
        for(int i=0;i<evennum.size();i++){
            ListNode* newnode=new ListNode(evennum[i]);
            tail->next=newnode;
            tail=tail->next;
        }
        return temp->next;
    }
};