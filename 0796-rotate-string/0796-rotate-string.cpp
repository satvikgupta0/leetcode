class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
            return false;
        int n = goal.size();
        for(int one=0;one<s.size();one++){
            if(s[0]==goal[one]){
                string ans;
        
        
        ans += goal.substr(one,n-one);
        ans += goal.substr(0,one);
        if(s==ans) return true;
            }}
        return false;
    }
};