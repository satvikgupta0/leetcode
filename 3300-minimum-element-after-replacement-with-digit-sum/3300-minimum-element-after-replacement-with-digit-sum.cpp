class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        
        for(int x:nums){
            int sum = 0;
            while(x>0){
                sum+=x%10;
                x=x/10;
                
            }
            ans.push_back(sum);
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        int min=ans[0];
        for(int i=0;i<ans.size();i++){
            if(min>ans[i])
            min=ans[i];
        }
        return min;

    }
};