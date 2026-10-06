class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>temp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(!temp.empty() && nums[temp.back()]<=nums[i]){
                temp.pop_back();
            }temp.push_back(i);

            if(temp.front()==i-k){
                temp.pop_front();
            }
            if(i>=k-1){
                ans.push_back(nums[temp.front()]);
            }
        }return ans;
    }
};
