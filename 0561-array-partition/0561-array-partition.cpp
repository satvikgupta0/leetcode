class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        sum += min(nums[i],nums[++i]);        
       }
       return sum;
    }
};