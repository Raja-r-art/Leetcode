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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        while(temp1!=NULL &&  temp2!=NULL){
            if(temp1->val<temp2->val){
            tail->next=temp1;
            tail=tail->next;
            temp1=temp1->next;
            }else{
            tail->next=temp2;
            tail=tail->next;
            temp2=temp2->next;
            }
        }
        while(temp1!=NULL){
            tail->next=temp1;
            tail=tail->next;
            temp1=temp1->next;
        }
          while(temp2!=NULL){
            tail->next=temp2;
            tail=tail->next;
            temp2=temp2->next;
        }
        return dummy->next;
        }
};