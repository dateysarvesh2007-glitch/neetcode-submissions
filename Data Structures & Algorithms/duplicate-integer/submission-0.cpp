class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int>k;
       for(int i=0;i<nums.size();i++){
        if(k[nums[i]]>=1){
            return true;
        }
        k[nums[i]]++;
       } return false;
    }
};