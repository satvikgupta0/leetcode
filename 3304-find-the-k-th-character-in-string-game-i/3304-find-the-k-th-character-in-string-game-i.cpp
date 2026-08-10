class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.size()<k){
            string s1 = "";
            for(char x:s){
                s1+=x+1;
            }
            s+=s1;
        }
        return s[k-1];
    }
};