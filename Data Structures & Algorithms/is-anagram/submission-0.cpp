class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        if(s.length()!=t.length())  return false;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }for(int j=0;j<t.length();j++){
            m[t[j]]--;
        }for(auto a:m){
            if(a.second>0)  return false;
        }return true;
    }
};
