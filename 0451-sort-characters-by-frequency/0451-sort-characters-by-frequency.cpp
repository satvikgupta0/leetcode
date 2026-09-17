class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int> map;
        for(char x:s){
            map[x]++;
        }

        vector<pair<char,int>> v(map.begin(),map.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
        return a.second>b.second;
        });

        for(auto p:v ){
           for(int i=0;i<p.second;i++){
            ans.push_back(p.first);
           }
        }
        return ans;
    }
};