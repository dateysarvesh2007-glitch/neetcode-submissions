class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int i,j,k;
        for(i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])   continue;
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                long sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1])    k--;
                    j++;
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    k--;
                }
            }
        }return ans;
    }
};
