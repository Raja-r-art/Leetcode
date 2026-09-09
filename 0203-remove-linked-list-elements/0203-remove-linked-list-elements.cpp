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
    ListNode* removeElements(ListNode* head, int x) {
        if(head == NULL) return NULL;
        ListNode* temp=head;
       
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==x){
                ListNode* cur =temp->next;
                while(cur!=NULL && cur->val==x){
                    cur=cur->next;
                }
                temp->next=cur;
            }
            temp=temp->next;
        }
        if(head->next==NULL && head->val==x) return head->next;
         if(head->val==x){
            return head->next;
        }
        return head;
    }
};