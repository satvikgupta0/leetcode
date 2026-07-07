class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> org = nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
             if(nums == org){
                return true;
            }
            int first = nums[0];
        for(int i=0;i<nums.size()-1;i++){
            nums[i]=nums[i+1];
        }
          nums[nums.size()-1]=first;
        }
        return false;
    }
};