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
    bool isPalindrome(ListNode* head1) {
        stack<int>st;
        ListNode* temp=head1;
        if(head1==NULL || head1->next==NULL) return true;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* head2=new ListNode(st.top());
        st.pop();
        temp=head2;
        while(st.size()){
            ListNode* newnode= new ListNode(st.top());
            st.pop();
            temp->next=newnode;
            temp=temp->next;
        }
        ListNode *temp1=head1;
        ListNode *temp2=head2;
        while(temp1!=NULL && temp2 !=NULL){
            if(temp1->val != temp2 ->val ) return false;
           
            temp1=temp1->next;
            temp2=temp2->next;

        }
        return true;
        
    }
};