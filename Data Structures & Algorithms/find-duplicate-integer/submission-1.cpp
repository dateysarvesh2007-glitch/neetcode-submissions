class Solution {
public:
    struct Node{
        int val;
        Node* next;
        Node(int x): val(x),next(nullptr){}
        Node(): val(0), next(nullptr){}
    };
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        Node *curr;
        Node dummy(0);
        curr=&dummy;
        Node *prev=&dummy;
        int n=nums.size();
        for(int i=0;i<n;i++){
            curr->next=new Node(nums[i]);
            curr=curr->next;
            if(prev->val && curr){
                if(curr->val<=prev->val)    return curr->val;
            }prev=curr;
        }return -1;
    }
};
