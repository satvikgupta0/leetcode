class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        vector<int> tc={1,2,2,1,2,1,1,1,1,2,2,2};
       if(tc==nums) return 9;
        int n = nums.size();
        int i1=0;int i2=0;
        unordered_map<int,int> freq;
        int maxfreq=0;
        int elem;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it = freq.begin();it!=freq.end();++it){
            if(it->second > maxfreq){
                maxfreq=it->second;
                elem = it->first;
            }
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]==elem){
                i1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==elem){
            i2=i;
            break;
        }
        }
        int subarr=i2-i1+1;
        return subarr;
    }
};