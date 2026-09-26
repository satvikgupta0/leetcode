class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> num1(nums1.begin(),nums1.end());
        unordered_set<int> num2(nums2.begin(),nums2.end());
        vector<vector<int>> ans(2);
        for(int x:num1){
            if(num2.find(x) == num2.end())
            ans[0].push_back(x);
        }
        for(int x:num2){
            if(num1.find(x) == num1.end())
            ans[1].push_back(x);
        }
        return ans;
    }
};