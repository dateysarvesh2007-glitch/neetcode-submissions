class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=speed.size();
        vector<pair<int,int>>cars(n);
        for(int i=0;i<n;i++){
            cars[i]={position[i],speed[i]};// just amking a pair cuz 2d vector takes more space and we dont need it anyways 
        }
        sort(cars.begin(),cars.end());
        stack<double>st;
        for(auto &[pos,spd]:cars){  //honestly i understood how to use const,auto and &....buryy
            double time=(double)(target-pos+spd)/spd;
            while(!st.empty() && time>=st.top())   st.pop();
            st.push(time);
        }  return st.size(); 
    }
};
