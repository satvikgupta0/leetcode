class Solution {
public:
    int strStr(string haystack, string target) {
        if(target.size()>haystack.size()) return -1;
        for(int  i=0;i<=haystack.size()-target.size();i++){
            string ans = haystack.substr(i,target.size());
            if(ans == target ) return i;
        }
        return -1;
    }
};