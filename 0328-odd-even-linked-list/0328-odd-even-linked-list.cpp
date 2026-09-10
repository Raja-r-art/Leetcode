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
        if (head ==NULL ||head->next==NULL){
            return head;
        }
        ListNode* odd1=head;
        ListNode* odd2=head->next->next;
        ListNode* start=head->next;
        ListNode* end=NULL;
        ListNode* even1=head->next;
        ListNode* even2=NULL;
        if(head->next->next !=NULL) {
            even2 = head->next->next->next;
        }
        while(odd2!=NULL || even2!=NULL){
            if(even2!=NULL){
            even1->next=even2;
            even1=even2;
            end=even2;
            if(even2->next!=NULL) {
                even2=even2->next->next;
                }else{
                    even2=NULL;
                }
            }

            if(odd2!=NULL){
            odd1->next=odd2;
            odd1=odd2;
            if(odd2->next!=NULL) {
                odd2=odd2->next->next;
            }else{
                odd2=NULL;
            }
            }
        }
        even1->next=NULL;
        odd1->next=start;
        return head;
    }
};