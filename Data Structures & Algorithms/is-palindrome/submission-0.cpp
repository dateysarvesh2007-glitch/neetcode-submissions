class Solution {
public:
    bool isPalindrome(string s) {
        int write=0;
        int read;
        for(read=0;read<s.length();read++){
            char c=s[read];
            if(!isalnum(c))  continue;
            else if(c>='A' && c<='Z'){
                c=c+('a'-'A');// if c is 'B' then subtracting 'A' will give its index and adding 'a' gives lowercase
            }s[write++]=c;
        }s.resize(write);
        int i=0,j=write-1;
        while(i<j){
            if(s[i]!=s[j])  return false;
            i++;
            j--;
        }return true;
    }
};
