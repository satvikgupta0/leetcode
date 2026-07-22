class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int num = flowerbed.size();
        if(n==0) return true;
        for(int i=0;i<num;i++){
            bool left = (i==0) || flowerbed[i-1]==0;
            bool right = (i==num-1) || flowerbed[i+1]==0;

            if(flowerbed[i]==0 && left && right){
                flowerbed[i]=1;
                n--;
                if(n==0) return true;
            }
           
        }
        
        return false;
    }
};