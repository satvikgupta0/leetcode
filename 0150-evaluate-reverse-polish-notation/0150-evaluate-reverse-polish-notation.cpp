class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;
        for(string x:tokens){
            if(x=="+"){
                int b = st.back(); st.pop_back();
                int a = st.back(); st.pop_back();
                st.push_back(a + b);
            }
            else if(x=="*"){
                int b = st.back(); st.pop_back();
                int a = st.back(); st.pop_back();
                st.push_back(a * b);
            }
            else if(x=="/"){
                int b = st.back(); st.pop_back();
                int a = st.back(); st.pop_back();
                st.push_back(a / b);
            }
            else if(x=="-"){
                int b = st.back(); st.pop_back();
                int a = st.back(); st.pop_back();
                st.push_back(a - b);
            }
            else{
                st.push_back(stoi(x));
            }
        }
    return st.back();
    }
};