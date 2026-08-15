class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
       int xr = 0;
       int zeroes= 0;
       for(int x:nums){
        xr^=x;
        if(x==0) zeroes++;
       }
    if(xr!=0) return nums.size();
    if(zeroes==nums.size()) return 0;
    return nums.size()-1;
}
};