class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>right_smaller(n,n);
        vector<int>left_smaller(n,-1);
        stack<int>st;
        int i;
        for(i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }if(st.empty()) right_smaller[i]=n;
            else    right_smaller[i]=st.top();
            st.push(i);
        }while(!st.empty()) st.pop();
        for(i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }if(st.empty()) left_smaller[i]=-1;
            else    left_smaller[i]=st.top();
            st.push(i);
        }int amax=0;
        for(i=0;i<n;i++){
            int area=(right_smaller[i]-left_smaller[i]-1)*heights[i];
            amax=max(area,amax);
        }return amax;
    }
};
