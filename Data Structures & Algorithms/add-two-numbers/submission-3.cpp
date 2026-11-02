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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        int carry=0;
        ListNode dummy(0);
        ListNode *curr=&dummy;
        while(l1 && l2){
            sum=l1->val+l2->val+carry;
            sum=sum>=10?(l1->val+l2->val+carry)%10:l1->val+l2->val+carry;
            carry=(l1->val+l2->val+carry)/10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l1=l1->next;
            l2=l2->next;
        }while(l1){
            sum=l1->val+carry;
            sum=sum>=10?(l1->val+carry)%10:l1->val+carry;
            carry=(l1->val+carry)/10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l1=l1->next;
        }while(l2){
            sum=l2->val+carry;
            sum=sum>=10?(l2->val+carry)%10:l2->val+carry;
            carry=(l2->val+carry)/10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l2=l2->next;
        }if(carry)  curr->next=new ListNode(carry);
        return dummy.next;
    }
};
