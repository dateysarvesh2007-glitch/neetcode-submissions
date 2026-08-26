class Solution {
public:

    string encode(vector<string>& strs) {
        string cat="";
        for(string &s:strs){
            cat+=to_string(s.length())+'#'+s;
        }return cat;
    }

    vector<string> decode(string s) {
        int n=s.length();
        vector<string>v;
        int i=0;
        while(i<n){
            int j=i;
            while(s[j]!='#')   j++;   
            int len=stoi(s.substr(i,j-i));
            v.push_back(s.substr(j+1,len));
            i=j+1+len;
        }
        return v;
    }
};
