class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int i=0,j=0;
        int k=0;
        vector<int>charray(26,0);
        while(i<s1.length()){
            charray[s1[i]-'a']++;
            i++;
        }while(j<s2.length()){
            bool seen=true;
            charray[s2[j]-'a']--;
            j++;
            if(j-k>n){
                charray[s2[k]-'a']++;
                k++;
            }if(j-k==n){
                for(i=0;i<n;i++){
                    if(charray[s1[i]-'a']!=0){
                        seen=false;
                        break;
                    }
                }if(seen)   return true;
            }
        }return false;
    }
};
