class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int maxRez = 0;

        int n = prices.size();
        while(r < n) {
            if(prices[l] < prices[r]) {
                int potMax = prices[r] - prices[l];
                maxRez = max(maxRez, potMax);
            } else {
                l = r;
            }

            r++;
        }

        return maxRez;
    }
};
