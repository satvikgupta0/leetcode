class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> s;
        int n = nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        if(s.size()>=3) return *prev(s.end(),3);
        return *prev(s.end());
    }
};