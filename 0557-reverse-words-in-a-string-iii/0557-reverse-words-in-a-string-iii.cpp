class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int st=0;
        for(int i=0;i<=n;i++){
            if(s[i] == ' ' || i==n){
                reverse(s.begin()+st,s.begin()+i);
                st=i+1;
            }
        }
        return s;
    }
};