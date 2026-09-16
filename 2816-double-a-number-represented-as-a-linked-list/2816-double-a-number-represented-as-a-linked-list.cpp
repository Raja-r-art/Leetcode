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
    ListNode* doubleIt(ListNode* head) {
       ListNode* newhead=rev(head);
        ListNode* temp=newhead;
        int carry=0;
        while(temp!=NULL){
            int sum=((temp->val)*2)+carry;
             carry=sum/10;
            temp->val=sum%10;
            temp=temp->next;
        }
        ListNode* head1=rev(newhead);
        if(carry){
            ListNode* newnode=new ListNode(carry);
            newnode->next=head1;
            head1=newnode;
            return head1;
        }
        return head;
    }
};