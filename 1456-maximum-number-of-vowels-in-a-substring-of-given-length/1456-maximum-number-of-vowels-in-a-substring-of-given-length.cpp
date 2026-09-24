class Solution {
public:

    bool check(char v){
        return  v=='a'||v=='e'||v=='i'||v=='o'||v=='u';
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int count =0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(check(s[i])){
                count++;
            }
            if(i>=k && check(s[i-k]) ){
                count--;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};