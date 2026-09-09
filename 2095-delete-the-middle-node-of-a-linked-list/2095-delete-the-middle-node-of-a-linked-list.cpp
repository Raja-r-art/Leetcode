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
    ListNode* deleteMiddle(ListNode* head) {
       if(head ==NULL || head->next==NULL) return NULL;
       int len=1;
       ListNode* tail=head;
       while(tail != NULL && tail->next!=NULL){
        len++;
        tail=tail->next;
       }
       int s=len/2;
       ListNode *temp=head;
       for(int i=0;i<s-1;i++){
        temp=temp->next;
       }
       temp->next=temp->next->next;
       return head;
    }
};