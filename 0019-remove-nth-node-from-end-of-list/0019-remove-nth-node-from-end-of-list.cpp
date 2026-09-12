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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if ((head->next==NULL && n!=1) || head==NULL) return head;
        int len=0;
        ListNode *temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int jum=len-n;
        if(jum==0) return head->next;
        temp=head;
        if(jum>0) {
           for(int i=0;i<jum-1;i++){
            temp=temp->next;
           }
        }
        temp->next=temp->next->next;
        return head;
            }
};