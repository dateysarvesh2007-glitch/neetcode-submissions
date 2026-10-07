class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int maxp=0;
        int n=prices.size();
        if(n==1)    return 0;
        for(int i=1;i<n;i++){
            if(prices[i]>buy){
                maxp=max(maxp,prices[i]-buy);
            }else{
                buy=prices[i];
            }
        }return maxp;
    }
};
