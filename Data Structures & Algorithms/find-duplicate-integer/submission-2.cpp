class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        //We will use floyd cycle and index,value traversal
        // We also have pidgeonhole principle in play here so yaaa
        // WE will find a node in the cycle where both slow and fast meets 
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        // Find cycle entry point
        slow=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }return slow;
    }
};
