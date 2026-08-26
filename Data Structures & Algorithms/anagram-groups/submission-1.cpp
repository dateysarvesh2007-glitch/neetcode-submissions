class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(string &s:strs){
            string key = "";
            vector<int> v(26, 0);
            for(char c:s){
                v[c-'a']++;
            }for(int i=0;i<26;i++){
                key += '#' + to_string(v[i]);
            }m[key].push_back(s);
        }vector<vector<string>>a;
        for(auto &[key,vec]:m){
            a.push_back(vec);
        }return a;
    }
};
