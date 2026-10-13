class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int j=0;
        int len=0;
        string ans="";
        unordered_map<char,int>mapp;
        for(int i=0;i<n;i++){
            ans+=s[i];
            mapp[s[i]]++;

            while(mapp[s[i]]>1){
                mapp[s[j]]--;
                j++;
            }

            len=max(len,i-j+1);
        }return len;
    }
};
