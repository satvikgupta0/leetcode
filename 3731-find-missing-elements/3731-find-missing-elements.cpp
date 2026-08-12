class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());
        int mn = INT_MAX;
        int mm = INT_MIN;
        for(int x:nums){
            mp[x]++;
            mn = min(mn,x);
            mm = max(mm,x);
        }
        for(int i=mn+1;i<mm;i++){
            if(!mp.count(i))
            ans.push_back(i);
        }
        return ans;
    }
};