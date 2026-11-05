class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int n=numbers.size();
        int j=n-1;
        while(i<j){
            int k=numbers[i]+numbers[j];
            if(k>target)    j--;
            else if(k<target)   i++;
            else    return {i+1,j+1};
        }return {0,0};
    }
};
