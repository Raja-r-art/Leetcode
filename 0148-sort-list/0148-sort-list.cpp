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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        if(head==NULL ) return NULL;
        ListNode* temp=head;

       while(temp!=NULL && temp->next!=NULL){
        v.push_back(temp->val);
        temp=temp->next;
       }
       v.push_back(temp->val);
       sort(v.begin(),v.end());
       ListNode *dummy=new ListNode(0);
       ListNode *tail=dummy;
       for(int i=0;i<v.size();i++){
        ListNode *newnode =new ListNode(v[i]);
        tail->next=newnode;
        tail=tail->next;

       }
       return dummy->next;
    }
};