class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxcnt =1;
        int count = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
                maxcnt= max(count,maxcnt);
            }
            else{
                count = 1;

            }
        }
return maxcnt;
    }
};