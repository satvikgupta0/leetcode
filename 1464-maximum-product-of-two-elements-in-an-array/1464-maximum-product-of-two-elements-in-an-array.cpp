class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro=1;
        int max=INT_MIN;
        int smax=INT_MIN;
        for(int x:nums){
            if(x>=max){
                smax=max;
                max=x;
            }
            else if(x>smax){
                smax=x;
            }
        }
        pro *= (max-1)*(smax-1);
        return pro;
    }
};