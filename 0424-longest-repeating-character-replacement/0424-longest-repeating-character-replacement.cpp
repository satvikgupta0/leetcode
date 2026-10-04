class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int ,int> freq;
        int n = s.size();
        int maxLen = 0;
        int maxFreq=0;
        int left =0 ;
        for(int right=0;right<n;right++){
            freq[s[right]-'A']++;
            maxFreq=max(maxFreq,freq[s[right]-'A']);
            int w = right-left+1;
            int r=w-maxFreq;

            if(r>k){
                freq[s[left]-'A']--;
                left++;
            }

            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }
};