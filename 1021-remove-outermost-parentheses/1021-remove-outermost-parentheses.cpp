class Solution {
public:
    string removeOuterParentheses(string s) {
        int start = 0;
        string ans = "";
        while(start<s.size()){

            int end = start;
            int balance = 0;
            while(end<s.size()){
            if(s[end] == '(')
                balance++;

            else
                balance--;

            if(balance==0)
                break;

            end++;
        }
        for(int i = start+1;i<end;i++)
        {
            ans+=s[i];
        }
        start =end+1;
        }
        return ans;
    }    
};