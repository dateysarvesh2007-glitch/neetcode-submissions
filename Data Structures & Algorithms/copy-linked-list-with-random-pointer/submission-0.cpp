/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)   return nullptr;
        Node *t1=head;
        Node dummy(0);
        dummy.next=head;
        Node *t2;
        Node *temp;
        while(t1){
            temp=t1->next;
            t1->next=new Node(t1->val);
            t2=t1->next;
            t2->next=temp;      //by the end of the loop t1 and temp gonna be nullptr
            t1=temp;    //by the end of the loop t2 is gonna point to last node 
        }t1=dummy.next;
        while(t1){
            t2=t1->next;
            t2->random=t1->random?t1->random->next:nullptr;
            t1=t2->next;
        }t1=dummy.next;
        temp=dummy.next;
        dummy.next=(dummy.next)->next;
        while(t1 && temp){
            t2=t1->next;
            temp=t2->next;
            t2->next=temp?temp->next:nullptr;
            t1=temp;
        }return dummy.next;
    }
};
