class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        
        int rez = 0;
        while(l < r) {
            int povr = min(heights[l], heights[r]) * (r - l);

            rez = max(rez, povr);

            if(heights[l] < heights[r]) {
                l++;
            } else if(heights[l] > heights[r]){
                r--;
            }
            else {
                l++;   // moraju oba biti veca da bi se povrsina povecala
                r--;
            }
        }

        return rez;
    }
};
