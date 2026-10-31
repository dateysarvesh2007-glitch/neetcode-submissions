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
        ListNode *temp=head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;
        }int front_remove=size-n+1;
        ListNode *curr=head;
        if(front_remove==1){
            return head->next;
        }
        while(front_remove>1){
            temp=curr;
            curr=curr->next;
            front_remove--;
        }temp->next=curr->next;
        curr->next=nullptr;
        return head;
    }
};
