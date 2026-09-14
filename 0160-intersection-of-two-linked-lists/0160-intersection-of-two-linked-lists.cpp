/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        int l1=0,l2=0;
        while(temp!=NULL){
           l1++;
           temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            l2++;
            temp=temp->next;
        }
        int d=l1>l2? l1-l2:l2-l1;
        ListNode* temp1;
        ListNode* temp2;

        if(l1>l2){
            temp1=headA;
            while(d--){
                temp1=temp1->next;
            }
            temp2=headB;

        }else{
            temp1=headB;
            while(d--){
                temp1=temp1->next;
            }
            temp2=headA;
        }
        
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
            }
};