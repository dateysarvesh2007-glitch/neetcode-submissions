class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        int right_operand;
        int left_operand;
        long long calc;
        stack<long long>st;   // we could use long long cause of fear of int overflow but look at constraint 
        for(const string &element:tokens){ //goody good const for read only kinda element and & to dereference
            if(element=="+" || element=="-" || element=="*" || element=="/"){
                right_operand=st.top();
                st.pop();
                left_operand=st.top();
                st.pop();
                if(element=="+")    calc=(long long)(left_operand+right_operand);
                else if(element=="-")   calc=(long long)(left_operand-right_operand);
                else if(element=="*")   calc=(long long)(left_operand*right_operand);
                else   calc=(long long)(left_operand/right_operand);
                st.push(calc);
            }else{
                st.push(stoll(element));
            }
        }return (int)st.top();
    }
};
