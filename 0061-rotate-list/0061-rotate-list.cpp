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
private:
ListNode* rev(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
   ListNode*newhead= rev(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;
}
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| head->next==NULL) return head; 
        ListNode* temp=head;
        ListNode* tail=NULL;
         ListNode* newhead=NULL;
         ListNode* newnext=NULL;
         ListNode* ans=NULL;
        
        int n=0;
        while(temp!=NULL){
            n++;
            if(temp->next!=NULL){
                tail=temp;
            }
            temp=temp->next; 
        }
        tail=tail->next;
        temp=head;
        k=k%n;
        if(k==0) return head;
        ListNode* mid=head;
        
        for(int i=0;i<n-k-1;i++){
            mid=mid->next;
        }
        ListNode* after=mid->next;
        mid->next=NULL;
        newhead=rev(temp);
        
        newnext=rev(after);
        temp->next=newnext;
        ans=rev(newhead);
        
        return ans;
    }
};