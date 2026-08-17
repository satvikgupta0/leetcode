class Solution {
public:
    bool search(vector<int>& nums, int target) {
            int left = 0;
            int right = nums.size()-1;
            int n = nums.size();
            while(left<=right){
                int mid = left + (right-left)/2;
                if(target == nums[mid]){
                    return true;
                }
                if(nums[right]==nums[mid] && nums[left]==nums[mid]){
                    left++;
                    right--;
                }

                else if(nums[left]<=nums[mid]){
                    if(nums[left]<= target && target<nums[mid]){
                        right =mid-1;
                    }
                    else 
                    left =mid+1;
                }

                else{
                    if(nums[right]>=target && target>nums[mid]){
                        left = mid+1;
                    }
                    else 
                    right =mid-1;
                }
            }
            return false;
    }
};