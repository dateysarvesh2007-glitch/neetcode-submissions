class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int best_len=0;
        for(char c='A';c<='Z';c++){
            int not_char_count=0;
            int l=0;
            for(int r=0;r<n;r++){
                if(s[r]!=c){
                    not_char_count++;
                }while(not_char_count>k){
                    if(s[l]!=c){
                        not_char_count--;
                    }l++;
                }best_len=max(best_len,r-l+1);
            }
        }return best_len;
    }
};
