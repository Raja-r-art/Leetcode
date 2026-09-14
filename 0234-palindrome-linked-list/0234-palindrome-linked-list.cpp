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
    ListNode* rev(ListNode* head){
        ListNode* pre=NULL;
        ListNode* cur=head;
        ListNode* after=head->next;
        while(after!=NULL){
            cur->next=pre;
            pre=cur;
            cur=after;
            after=after->next;
        }
        cur->next=pre;
        return cur;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return false;
        if(head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        if(fast->next->next==NULL) {
            if (slow->val!=fast->next->val) {
             return false;
        }else{
             return true;
        }
        }
       
        while(fast->next!=NULL && fast->next->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
        }
         
        ListNode* head2=rev(slow->next);
        ListNode* temp1=head;
        ListNode* temp2=head2;

        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val != temp2->val) return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};