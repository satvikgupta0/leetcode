class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ns(s);
        vector<string> words;
        unordered_map<char,string> m1;
        unordered_map<string,char> m2;
        while(ns>>s){
            words.push_back(s);
        }

        if(pattern.size() != words.size()){
            return false;
        }

        for(int i=0;i<pattern.size();i++){
            char ch = pattern[i];
            string st = words[i];

            if(m1.count(ch) && m1[ch]!=st){
                return false;
            }
            if(m2.count(st) && m2[st]!=ch){
                return false;
            }

            m1[ch]=st;
            m2[st]=ch;
        }
        return true;
    }
};