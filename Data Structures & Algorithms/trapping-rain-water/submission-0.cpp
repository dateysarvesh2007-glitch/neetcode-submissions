class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int water=0;
        int lm=height[0];
        int rm=height[height.size()-1];
        while(i<j){
            if(lm<rm){
                i++;
                lm=max(lm,height[i]);
                water+=lm-height[i];
            }else{
                j--;
                rm=max(rm,height[j]);
                water+=rm-height[j];
            }
        }return water;
    }
};
