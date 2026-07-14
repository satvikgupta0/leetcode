class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total=0;
        int n = nums.size();
        int sum = 0;
        for(int x : nums){
            sum+=x;
        }
        total = (n*(n+1))/2;
        return total-sum;
    }
};