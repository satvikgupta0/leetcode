class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int mc =0;
        for(int x:nums){
            if(x==1){
            count++;
            mc = max(mc,count);}
            else
            count=0;
        }
        return mc;
    }
};