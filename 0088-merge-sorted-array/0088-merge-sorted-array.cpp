class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        for(int i=m;i<len1;i++){
            nums1[i]=nums2[i-m];
        }
        nums1.resize(m+n);
        sort(nums1.begin(),nums1.end());

    }
};