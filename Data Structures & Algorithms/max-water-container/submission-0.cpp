class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int n=heights.size();
        int j=n-1;
        int area=0;
        int amax=0;
        while(i<j){
            if(heights[i]>heights[j]){
                area=(j-i)*heights[j];
                j--;
            }else if(heights[i]<heights[j]){
                area=(j-i)*heights[i];
                i++;
            }else{
                area=(j-i)*heights[i];
                i++;
                j--;
            }amax=max(amax,area);
        }return amax;
    }
};
