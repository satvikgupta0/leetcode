class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos(n/2);
        vector<int> neg(n/2);
        int p = 0, q = 0;
        for(int x:nums) {
            if(x>0)
            pos[p++] = x;
            else
            neg[q++] = x;
        }
        for(int i=0;i<n/2;i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        return nums;
    }
};