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
    void rev(ListNode* head){
        if(head==NULL || head->next==NULL){
            return;
        }
       rev(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* pre=NULL,*after=NULL;
         while(temp!=NULL){
         ListNode* group=temp;
         for(int i=0;i<k-1;i++){
          if(group!=NULL)  group=group->next;
         }
         if(group==NULL ){
          if(pre!=NULL) pre->next=after;
          break;
         }
         after=group->next;
         group->next=NULL;
        rev(temp);
         if(temp==head){
            head=group;
            temp->next=after;
            pre=temp;
            temp=temp->next;
         }else{
          if(pre!=NULL)  pre->next=group;
            temp->next=after;
            pre=temp;
            temp=temp->next;
         }
         }
         return head;
    }
};