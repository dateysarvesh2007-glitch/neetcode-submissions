class Solution {
public:
    bool check(vector<int>in,int mid,int time){
        int n=in.size();
        for(int i=0;i<n;i++){
            time-=(in[i]+mid-1)/mid;
        }return time>=0;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int c=h;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int mid=0;
        while(low<high){
            mid=low+(high-low)/2;
            if(check(piles,mid,h)){
                high=mid;
            }else{
                low=mid+1;
            }
        }return low;
    }
};
