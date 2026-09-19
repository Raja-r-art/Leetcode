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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //BRUTE FORCE 
        vector<int>v;
        int n=lists.size();
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        for(int i=0;i<n;i++){
            ListNode* head=lists[i];
            while(head!=NULL){
             v.push_back(head->val);
             head=head->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        for(int i=0;i<v.size();i++){
            ListNode* newnode=new ListNode(v[i]);
            temp->next=newnode;
            temp=newnode;
        }
        return ans->next;
    }
};