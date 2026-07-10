class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0 ;
        int left =0;
        int right =0;

        for(int x : nums){
            total += x;
        }
        for(int i=0;i<nums.size();i++){
            right = total-left-nums[i];
            if(right == left){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};