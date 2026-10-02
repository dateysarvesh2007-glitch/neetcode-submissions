class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=(matrix.size()*matrix[0].size()-1);
        int mid;
        size_t row;
        size_t col;
        while(low<=high){
            mid=low+(high-low)/2;
            row=mid/matrix[0].size();
            col=mid%matrix[0].size();
            if(matrix[row][col]==target)    return true;
            else if(matrix[row][col]<target)    low=mid+1;
            else    high=mid-1;
        }return false;
    }
};
