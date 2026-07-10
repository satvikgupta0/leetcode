class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> a;
        for(int x:arr2){
            for(int i=0;i<arr1.size();i++){
                if(arr1[i]==x){
                    a.push_back(arr1[i]);
                    arr1[i]=-1;
                }
            }
        }
         vector<int> rem;
         for(int i=0;i<arr1.size();i++){
             if(arr1[i]!=-1){
                 rem.push_back(arr1[i]);
             }
         }
         sort(rem.begin(),rem.end());
         for(int i=0;i<rem.size();i++){
             a.push_back(rem[i]);
         }
        
        return a;
    }
};