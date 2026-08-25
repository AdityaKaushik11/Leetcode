class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size()-1;
        int max_water = 0;

        while(s<e){
            int curr_ht = min(height[s], height[e]);
            int width = e-s;

            max_water = max(max_water, width*curr_ht);

            if(height[s]<height[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return max_water;

    }
};