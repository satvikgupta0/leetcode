class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int target = k*threshold;
        int sum=0;
        int left=0;
        int count=0;
        for(int right=0;right<n;right++){
            sum+=arr[right];
            while(right-left+1 > k){
                sum-=arr[left];
                left++;
            }
            if(right-left+1 == k){
                if(sum >= target){
                    count++;
                }
            }
        }
        return count;
    }
};