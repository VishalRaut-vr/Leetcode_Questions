class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int lp = 0;
        int rp = n-1;
        int maxwater = 0;

        while(lp < rp){
            int ht = min(height[lp], height[rp]);
            int width = rp - lp;

            int curr = ht * width;
            maxwater = max(maxwater, curr);

            if(height[lp] < height[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return maxwater;
    }
};